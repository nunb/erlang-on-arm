/*
 * atom.h
 *
 *  Created on: Mar 31, 2014
 *      Author: Studnicki
 */

#ifndef ATOM_H_
#define ATOM_H_

#include "global.h"
#include "index.h"
#include "hash.h"
#include "erl_term.h"

typedef struct {
	IndexSlot slot; // Atom is an element of IndexTable thus this must be at the top
	uint8_t len; // length of atom name
	byte* name;
} Atom;

void init_atom_table(void);
Eterm erts_atom_put(const byte* name, int len);
int erts_atom_get(const char *name, int len, Eterm* ap);
void dump_atoms();

// Hashtable callbacks
static HashValue atom_hash(Atom*);
static int atom_cmp(Atom*, Atom*);
static Atom* atom_alloc(Atom*);
static void atom_free(Atom*);

#endif /* ATOM_H_ */