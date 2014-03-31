/*
 * beam_load.h
 *
 *  Created on: Oct 30, 2013
 *      Author: Studnicki
 */

#ifndef BEAM_LOAD_H_
#define BEAM_LOAD_H_

#define MakeIffId(a,b,c,d) \
	((uint8_t)(a)<<24 | (uint8_t)(b)<<16 | (uint8_t)(c)<<8 | (uint8_t)(d))

// Mandatory chunk types
#define ATOM_CHUNK 0
#define CODE_CHUNK 1
#define STR_CHUNK 2
#define IMP_CHUNK 3
#define EXP_CHUNK 4

// Optional chunk types
#define LAMBDA_CHUNK 5
#define LITERAL_CHUNK 6
#define ATTR_CHUNK 7
#define COMPILE_CHUNK 8
#define LINE_CHUNK 9

#define NUM_CHUNK_TYPES (sizeof(chunk_types)/sizeof(chunk_types[0]))
#define NUM_MANDATORY 5

#define GetInt(Stp, Dest) \
	do { \
		Stp->file_left -= 4; \
		Dest = *(Stp->file_p) << 24 | *(Stp->file_p+1) << 16 | *(Stp->file_p+2) << 8 | *(Stp->file_p+3); \
		Stp->file_p += 4; \
	} while(0)

#define GetByte(Stp, Dest) \
	do { \
		Stp->file_left--; \
		Dest = *(Stp->file_p); \
		Stp->file_p++; \
	} while(0)

#define GetString(Stp, Dest, Length) \
	do { \
		Stp->file_left -= Length; \
		Dest = Stp->file_p; \
		Stp->file_p += Length; \
	} while(0)

static uint32_t chunk_types[] = {
		// Mandatory chunk types
		MakeIffId('A','t','o','m'), // 0
		MakeIffId('C','o','d','e'), // 1
		MakeIffId('S','t','r','T'), // 2
		MakeIffId('I','m','p','T'), // 3
		MakeIffId('E','x','p','T'), // 4
		// Optional chunk types
		MakeIffId('F','u','n','T'), // 5
		MakeIffId('L','i','t','T'), // 6
		MakeIffId('A','t','t','r'), // 7
		MakeIffId('C','I','n','f'), // 8
		MakeIffId('L','i','n','e')  // 9
};

typedef struct {
	Eterm module; //atom for module
	Eterm function; //atom for function
	int arity; //function arity
	uint32_t patches; //location in code to be patches after loading with the global address
	//BifFunction bf; //pointer to bif function, null otherwise
} ImportEntry;

typedef struct {
	uint32_t value;
	uint32_t patches; //like in ImportEntry;
} Label;

typedef struct LoaderState {
	// Pointer to the actual code
	byte* code_file;
	// Size of the code file (Byte 5-8)
	uint32_t code_size;
	// Left bytes of file
	uint32_t file_left;
	// Current pointer inside the file
	byte* file_p;

	// All found chunks
	struct {
		byte* start;
		uint32_t size;
	} chunks[NUM_CHUNK_TYPES];

	// ATOM TABLE RELATED FIELDS
	uint32_t num_atoms; // atom count in the module file
	Eterm* atom; // atom table

	// IMPORT TABLE RELATED FILEDS
	uint32_t num_imports;
	ImportEntry* import;

	// LABELS
	uint32_t num_labels;
	Label* labels;

	// FUNCTIONS
	uint32_t num_functions;

	// CODE CHUNK RELATED FIELDS
	uint32_t code_start;

	uint32_t catches;
} LoaderState;

void erts_load(byte* code);
static int init_iff_file(LoaderState* loader);
static int scan_iff_file(LoaderState* loader);
static int verify_chunks(LoaderState* loader);
static int load_atom_table(LoaderState* loader);
static int read_code_header(LoaderState* loader);
static int load_code(LoaderState* loader);
static int load_import_table(LoaderState* loader);

#endif /* BEAM_LOAD_H_ */
