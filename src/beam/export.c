/*
 * export.c
 *
 *  Created on: Apr 2, 2014
 *      Author: Studnicki
 */

#include "export.h"
#include "io.h"

extern BeamInstr beam_apply[];

void init_export_table(void) {
	HashFunctions f;

	f.hash = (H_FUN)export_hash;
	f.cmp = (HCMP_FUN)export_cmp;
	f.alloc = (HALLOC_FUN)export_alloc;
	f.free = (HFREE_FUN)export_free;

	erts_index_init(&export_table, "export_tab", EXPORT_TABLE_SIZE, EXPORT_TABLE_SIZE, f);
}

Export* erts_export_put(Eterm module, Eterm function, uint8_t arity) {
	Export export;
	export.module = module;
	export.function = function;
	export.arity = arity;
	export.address = (BeamInstr*)(beam_apply+3);
	export.bif = NULL;
	return (Export*)index_put_entry(&export_table, &export);
}

Export* erts_export_get(Export* e) {
	Export* export;
	export = (Export*)hash_get(&export_table.htable, e);
	return export;
}

static HashValue export_hash(Export* e) {
	return EXPORT_HASH(e->module, e->function, e->arity);
}

static int export_cmp(Export* tmpl, Export* obj) {
	return !(tmpl->module == obj->module &&
			 tmpl->function == obj->function &&
			 tmpl->arity == obj->arity);
}

static Export* export_alloc(Export* tmpl) {
	Export* obj = pvPortMalloc(sizeof(Export));
	obj->module = tmpl->module;
	obj->function = tmpl->function;
	obj->arity = tmpl->arity;
	obj->address = tmpl->address;

	return obj;
}

static void export_free(Export* obj) {
	vPortFree((void*)obj);
}
