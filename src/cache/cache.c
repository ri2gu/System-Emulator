/**************************************************************************
  * C S 429 system emulator
 * 
 * cache.c - A cache simulator that can replay traces from Valgrind
 *     and output statistics such as number of hits, misses, and
 *     evictions, both dirty and clean.  The replacement policy is LRU. 
 *     The cache is a writeback cache. 
 * 
 * Copyright (c) 2021, 2023. 
 * Authors: M. Hinton, Z. Leeper.
 * All rights reserved.
 * May not be used, modified, or copied without permission.
 **************************************************************************/ 
#include <getopt.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <string.h>
#include <errno.h>
#include "cache.h"

#define ADDRESS_LENGTH 64

/* Counters used to record cache statistics in printSummary().
   test-cache uses these numbers to verify correctness of the cache. */

//Increment when a miss occurs
int miss_count = 0;

//Increment when a hit occurs
int hit_count = 0;

//Increment when a dirty eviction occurs
int dirty_eviction_count = 0;

//Increment when a clean eviction occurs
int clean_eviction_count = 0;

/* STUDENT TO-DO: add more globals, structs, macros if necessary */
uword_t next_lru;
int LRU_cnt = 0; 

// log base 2 of a number.
// Useful for getting certain cache parameters
static size_t _log(size_t x) {
  size_t result = 0;
  while(x>>=1)  {
    result++;
  }
  return result;
}

/*
 * Initialize the cache according to specified arguments
 * Called by cache-runner so do not modify the function signature
 *
 * The code provided here shows you how to initialize a cache structure
 * defined above. It's not complete and feel free to modify/add code.
 */
cache_t *create_cache(int A_in, int B_in, int C_in, int d_in) {
    /* see cache-runner for the meaning of each argument */
    cache_t *cache = malloc(sizeof(cache_t));
    cache->A = A_in;
    cache->B = B_in;
    cache->C = C_in;
    cache->d = d_in;
    unsigned int S = cache->C / (cache->A * cache->B);

    cache->sets = (cache_set_t*) calloc(S, sizeof(cache_set_t));
    for (unsigned int i = 0; i < S; i++){
        cache->sets[i].lines = (cache_line_t*) calloc(cache->A, sizeof(cache_line_t));
        for (unsigned int j = 0; j < cache->A; j++){
            cache->sets[i].lines[j].valid = 0;
            cache->sets[i].lines[j].tag   = 0;
            cache->sets[i].lines[j].lru   = 0;
            cache->sets[i].lines[j].dirty = 0;
            cache->sets[i].lines[j].data  = calloc(cache->B, sizeof(byte_t));
        }
    }

    next_lru = 0;
    return cache;
}

cache_t *create_checkpoint(cache_t *cache) {
    unsigned int S = (unsigned int) cache->C / (cache->A * cache->B);
    cache_t *copy_cache = malloc(sizeof(cache_t));
    memcpy(copy_cache, cache, sizeof(cache_t));
    copy_cache->sets = (cache_set_t*) calloc(S, sizeof(cache_set_t));
    for (unsigned int i = 0; i < S; i++) {
        copy_cache->sets[i].lines = (cache_line_t*) calloc(cache->A, sizeof(cache_line_t));
        for (unsigned int j = 0; j < cache->A; j++) {
            memcpy(&copy_cache->sets[i].lines[j], &cache->sets[i].lines[j], sizeof(cache_line_t));
            copy_cache->sets[i].lines[j].data = calloc(cache->B, sizeof(byte_t));
            memcpy(copy_cache->sets[i].lines[j].data, cache->sets[i].lines[j].data, sizeof(byte_t));
        }
    }
    
    return copy_cache;
}

void display_set(cache_t *cache, unsigned int set_index) {
    unsigned int S = (unsigned int) cache->C / (cache->A * cache->B);
    if (set_index < S) {
        cache_set_t *set = &cache->sets[set_index];
        for (unsigned int i = 0; i < cache->A; i++) {
            printf ("Valid: %d Tag: %llx Lru: %lld Dirty: %d\n", set->lines[i].valid, 
                set->lines[i].tag, set->lines[i].lru, set->lines[i].dirty);
        }
    } else {
        printf ("Invalid Set %d. 0 <= Set < %d\n", set_index, S);
    }
}

/*
 * Free allocated memory. Feel free to modify it
 */
void free_cache(cache_t *cache) {
    unsigned int S = (unsigned int) cache->C / (cache->A * cache->B);
    for (unsigned int i = 0; i < S; i++){
        for (unsigned int j = 0; j < cache->A; j++) {
            free(cache->sets[i].lines[j].data);
        }
        free(cache->sets[i].lines);
    }
    free(cache->sets);
    free(cache);
}

/* STUDENT TO-DO:
 * Get the line for address contained in the cache
 * On hit, return the cache line holding the address
 * On miss, returns NULL
 */
cache_line_t *get_line(cache_t *cache, uword_t addr) {
    /* your implementation */
        unsigned int S = (unsigned int) cache->C / (cache->A * cache->B);
        size_t b = _log(cache ->B); 
        //getting the block address and setting the index 
        uword_t addy = addr >> b;
        uword_t ind = addy % S;
        uword_t tag = addr >> (b + _log(S));        

        for (unsigned int i = 0; i < cache->A; i++) {
        //if there's a hit 
            cache_line_t *cac_line = &cache->sets[ind].lines[i];
            if (cac_line -> valid && cache->sets[ind].lines[i].tag == tag){
                //return the cache line holding the address 
                return &(cache->sets[ind].lines[i]);
            }
        }
    //if there's a miss 
    return NULL;

}

/* STUDENT TO-DO:
 * Select the line to fill with the new cache line
 * Return the cache line selected to filled in by addr
 */
cache_line_t *select_line(cache_t *cache, uword_t addr) {
    /* your implementation */
    unsigned int S = (unsigned int) cache->C / (cache->A * cache->B);
    uword_t addy = addr >> _log(cache->B);
    uword_t index = addy % S;
    cache_line_t *line = &(cache->sets[index].lines[0]);
    
    //going through everything in the cache 
    for (int i = 0; i < cache->A; i++) {
        //finding something to fill: the smallest lru
        if (cache->sets[index].lines[i].lru < line->lru) {
            line = &(cache->sets[index].lines[i]);
        }
        //finding something to fill: a cache line that isn't valid 
        if (cache->sets[index].lines[i].valid == false) {
            return &(cache->sets[index].lines[i]);
        }
    }

    return line;
}

/*  STUDENT TO-DO:
 *  Check if the address is hit in the cache, updating hit and miss data.
 *  Return true if pos hits in the cache.
 */
bool check_hit(cache_t *cache, uword_t addr, operation_t operation) {
    /* your implementation */
    cache_line_t *line = get_line(cache, addr);

    if (line == NULL) {
        //if the line is null, just update the miss count since no hits 
        miss_count++;
        return false;
    }   
    else {
        //if the line is not null, then there's a hit, so update counts
        //additionally, if the operation is write, then you have to update that its been modified 
        hit_count++;
        LRU_cnt++;
        line->lru = LRU_cnt;
        line->dirty = (operation == WRITE) ? true : line->dirty;
        return true;
}

}

/*  STUDENT TO-DO:
 *  Handles Misses, evicting from the cache if necessary.
 *  Fill out the evicted_line_t struct with info regarding the evicted line.
 */
evicted_line_t *handle_miss(cache_t *cache, uword_t addr, operation_t operation, byte_t *incoming_data) {
    evicted_line_t *evicted_line = malloc(sizeof(evicted_line_t));
    evicted_line -> data = (byte_t *) calloc(cache->B, sizeof(byte_t));
    unsigned int S = (unsigned int) cache->C / (cache->A * cache->B);
    size_t s = _log(S); 
    size_t b = _log(cache->B); 

    /* your implementation */
    cache_line_t *line = select_line(cache, addr); // Select the cache line for the given address

    evicted_line -> valid = false; // Set the valid bit of the evicted line to false

    if (line->valid) { // If the selected line is valid
        if (line->data == NULL) { // If the data in the selected line is NULL
            evicted_line->data = line->data; // Copy the NULL data to the evicted line
        } else {
            memcpy(evicted_line->data, line->data, cache -> B); // Copy the data from the selected line to the evicted line
        }

        uword_t address = addr >> b; // Calc addy by right-shifting addr by b bits
        uword_t index = address % S; // Calc the index by taking the modulus of the addy
        evicted_line->addr = (line->tag << (b + s)) | (index << b); // Calculate the address for the evicted line
        evicted_line->dirty = line->dirty; // Copy the dirty bit from line to evicted line
        evicted_line->valid = line->valid; // Copy the valid bit from line to evicted line

        // Depending on if the evicted line was dirty, update counts
        evicted_line->dirty ? dirty_eviction_count++ : clean_eviction_count++;
    }

    if (incoming_data != NULL) { // If incoming data is not NULL
        memcpy(line->data, incoming_data, cache -> B); // Copy the incoming data to the data field of the selected line
    } else {
        line->data = incoming_data; // Otherwise, set the data field of the selected line to NULL
    }

    line->dirty = (operation == READ) ? 0 : 1; // Set the dirty bit of the selected line based on the operation (READ or WRITE)
    line->tag = addr >> (b + s); // Calculate the tag by right-shifting addr by (b + s) bits
    line->valid = true; // Set the valid bit of the selected line to true
    LRU_cnt++; // Increment the LRU count
    line->lru = LRU_cnt; // Set the LRU count of the selected line to the current LRU count

    return evicted_line; // Return the evicted line
}

/* STUDENT TO-DO:
 * Get 8 bytes from the cache and write it to dest.
 * Preconditon: addr is contained within the cache.
 */
void get_word_cache(cache_t *cache, uword_t addr, word_t *dest) {
    /* Your implementation */
    // cache_line_t *line = get_line(cache, addr);
    // //calculate the offset 
    // unsigned int offset = addr % _log(cache->B); 
    // //the destination should be the data plus the offset 
    // *dest = *((word_t*)(line->data + offset));
    cache_line_t *temp = get_line(cache, addr);
    byte_t offset = addr % cache -> B;
    word_t val = 0;
    for (int i = 0; i < 8; i++) {
        word_t b = temp->data[offset+i] & 0xFF;
        val = val | (b <<(8*i));
    }
    *dest = val;

}

/* STUDENT TO-DO:
 * Set 8 bytes in the cache to val at pos.
 * Preconditon: addr is contained within the cache.
 */
void set_word_cache(cache_t *cache, uword_t addr, word_t val) {
    // /* Your implementation */
    // //getting the line of data
    // cache_line_t *line = get_line(cache, addr);
    // //calculating the offset 
    // byte_t offset = addr % _log(cache->B); 
    // //setting val = to value at data + offset
    // val =  *(word_t*)(line->data + offset); 
    cache_line_t *temp = get_line(cache, addr);
    byte_t offset = addr % cache -> B;
    for (int i = 0; i < 8; i++) {
        temp->data[offset+i] = (byte_t)val & 0xFF;
        val >>= 8;
    }
}

/*
 * Access data at memory address addr
 * If it is already in cache, increase hit_count
 * If it is not in cache, bring it in cache, increase miss count
 * Also increase eviction_count if a line is evicted
 *
 * Called by cache-runner; no need to modify it if you implement
 * check_hit() and handle_miss()
 */
void access_data(cache_t *cache, uword_t addr, operation_t operation)
{
    if(!check_hit(cache, addr, operation))
        free(handle_miss(cache, addr, operation, NULL));
}

//block size is capital B, which is always 2^b
// a memory byte address d translates into an equivalent pair (k, f)
//  - where k is a memory block address and f is the block offset (d = k * 2^b + f)
//the offset is always one lower than the block size (B)
//if you want to get lower case S, make sure you take the log of the S that was defined above 
//look at cache.h for definitions 

