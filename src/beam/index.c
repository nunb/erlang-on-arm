/*
 * index.c
 *
 *  Created on: Mar 31, 2014
 *      Author: Studnicki
 */

#include "index.h"
#include "io.h"

inline IndexSlot* erts_index_lookup(IndexTable* t, uint16_t ix) {
	return t->seg_table[ix>>INDEX_PAGE_SHIFT][ix&INDEX_PAGE_MASK];
}

inline int16_t index_put(IndexTable* t, void* obj) {
	return index_put_entry(t, obj)->index;
}

IndexTable* erts_index_init(IndexTable* t, char* name, int size, int limit, HashFunctions fun) {
	unsigned int base_size = ((limit+INDEX_PAGE_SIZE-1)/INDEX_PAGE_SIZE)*sizeof(IndexSlot*);
	hash_init(&t->htable, name, 3*size/4, fun);

	t->size = 0;
	t->limit = limit;
	t->entries = 0;
	t->seg_table = (IndexSlot***)pvPortMalloc(base_size);

	return t;
}

IndexSlot* index_put_entry(IndexTable* t, void* obj) {
	int16_t ix;
	IndexSlot* p = (IndexSlot*)hash_put(&t->htable, obj);
	if(p->index >= 0) {
		return p;
	}

	ix = t->entries;
	if(ix >= t->size) {
		unsigned int sz;
		if(ix >= t->limit) {
			erl_exit("no more index entries!");
		}
		sz = INDEX_PAGE_SIZE*sizeof(IndexSlot*);
		t->seg_table[ix>>INDEX_PAGE_SHIFT] = pvPortMalloc(sz);
		t->size += INDEX_PAGE_SIZE;
	}
	t->entries++;
	p->index = ix;
	t->seg_table[ix>>INDEX_PAGE_SHIFT][ix&INDEX_PAGE_MASK] = p;
	return p;
}

int index_get(IndexTable* t, void* obj) {
	IndexSlot* p = (IndexSlot*)hash_get(&t->htable, obj);

	if(p != NULL) {
		return p->index;
	}
	return -1;
}
