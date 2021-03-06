/*
 * hash.c
 *
 *  Created on: Nov 2, 2013
 *      Author: Studnicki
 */
#include "hash.h"

static const int h_size_table[] = {
  2, 5, 11, 23, 47, 97, 197, 397, 797,
  1201,   1597,
  2411,   3203,
  4813,   6421,
  9643,   12853,
  19289,  25717,
  51437,
  102877,
  205759,
  411527,
  823117,
  1646237,
  3292489,
  6584983,
  13169977,
  26339969,
  52679969,
  -1
};

// does call the free callback
void* hash_remove(Hash* h, void* object) {
	HashValue hval = h->fun.hash(object);
	int ix = hval % h->size;
	HashBucket* b = h->bucket[ix];
	HashBucket* prev = 0;

	while(b != 0) {
		if((b->hvalue == hval) && (h->fun.cmp(object, (void*)b) == 0)) {
			if(prev != 0) {
				prev->next = b->next;
			}
			else {
				h->bucket[ix] = b->next;
			}
			h->fun.free((void*)b);
			if(h->bucket[ix] == NULL) {
				h->used--;
			}
			return object;
		}
		prev = b;
		b = b->next;
	}
	return (void*)0;
}

void* hash_put(Hash* h, void* object) {
	HashValue hval = h->fun.hash(object);
	int ix = hval % h->size;
	HashBucket* b = h->bucket[ix];

	while(b != (HashBucket*)0) {
		if((b->hvalue == hval) && (h->fun.cmp(object, (void*)b) == 0)) {
			return (void*)b;
		}
		b = b->next;
	}
	b = (HashBucket*)h->fun.alloc(object);

	if(h->bucket[ix] == NULL) {
		h->used++;
	}

	b->hvalue = hval;
	b->next = h->bucket[ix];
	h->bucket[ix] = b;

	return (void*)b;
}

void* hash_get(Hash* h, void* object) {
	HashValue hval = h->fun.hash(object);
	int ix = hval % h->size;
	HashBucket* b = h->bucket[ix];

	while(b != (HashBucket*)0) {
		if((b->hvalue == hval) && (h->fun.cmp(object, (void*)b) == 0)) {
			return (void*) b;
		}
		b = b->next;
	}
	return (void*)0;
}

void hash_delete(Hash* h) {
	int old_size = h->size;
	int i;

	for(i=0; i<old_size; i++) {
		HashBucket* b = h->bucket[i];
		while(b != (HashBucket*)0) {
			HashBucket* next = b->next;
			h->fun.free((void*) b);
			b = next;
		}
	}
	vPortFree(h->bucket);
	vPortFree((void*)h);
}

Hash* hash_new(char* name, int size, HashFunctions fun) {
	Hash* h = pvPortMalloc(sizeof(Hash));
	h = hash_init(h, name, size, fun);
	return h;
}

Hash* hash_init(Hash* h, char* name, int size, HashFunctions fun) {
	// find an appropriate prime number size higher than the given size
	int ix = 0;
	while(h_size_table[ix] != -1 && h_size_table[ix] < size) {
		ix++;
	}

	if(h_size_table[ix] == -1) {
		erl_exit("hash table size too large!");
	}

	int sz = h_size_table[ix];

	h->bucket = (HashBucket**) pvPortMalloc(sz * sizeof(HashBucket*));
	h->name = name;
	h->fun = fun;
	h->size = sz;
	h->ix = ix;
	h->used = 0;

	return h;
}
