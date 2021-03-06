/*
 * export.h
 *
 *  Created on: Apr 2, 2014
 *      Author: Studnicki
 */

#ifndef EXPORT_H_
#define EXPORT_H_

// Export table
#include "index.h"
#include "erl_bif.h"

//@todo make N export tables where N is number of possible code versions
static IndexTable export_table;

typedef struct {
	IndexSlot slot;
	Eterm module;
	Eterm function;
	uint8_t arity;
	BeamInstr* address;
	BifFunction bif;
} Export;

void init_export_table(void);
Export* erts_export_put(Eterm module, Eterm function, uint8_t arity);
Export* erts_export_get(Export*);

//Hashtable callbacks
static HashValue export_hash(Export* e);
static int export_cmp(Export* tmpl, Export* obj);
static Export* export_alloc(Export* tmpl);
static void export_free(Export* obj);

#define EXPORT_HASH(m,f,a) ((m)*(f)+(a))
#endif /* EXPORT_H_ */
