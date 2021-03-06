/*
 * hash.h
 *
 *  Created on: Nov 2, 2013
 *      Author: Studnicki
 */

#ifndef HASH_H_
#define HASH_H_

// General hash functions

#include "global.h"

typedef uint16_t HashValue;

typedef int (*HCMP_FUN)(void*, void*);
typedef HashValue (*H_FUN)(void*);
typedef void* (*HALLOC_FUN)(void*);
typedef void (*HFREE_FUN)(void*);

typedef struct HashBucket {
	struct HashBucket* next;
	HashValue hvalue;
} HashBucket;

typedef struct HashFunctions {
	H_FUN hash;
	HCMP_FUN cmp;
	HALLOC_FUN alloc;
	HFREE_FUN free;
} HashFunctions;

typedef struct Hash {
	HashFunctions fun;
	char* name;
	int size;
	int ix;
	int used;
	HashBucket** bucket;
} Hash;

//creates a new hashtable
Hash* hash_new(char*, int, HashFunctions);
//initializes hash table
Hash* hash_init(Hash*, char*, int, HashFunctions);
//deletes hashtable
void hash_delete(Hash*);
//gets object from the hashtable
void* hash_get(Hash*, void*);
//puts object in the hashtable
void* hash_put(Hash*, void*);
//removes object from the hashtable
void* hash_remove(Hash*, void*);
#endif /* HASH_H_ */
