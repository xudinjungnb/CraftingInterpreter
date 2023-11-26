#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

// disassemble all bytecode in a chunk
void disassembleChunk(Chunk* chunk, const char* name);
// disasseable a specified bytecode in a chunk
int disassembleInstruction(Chunk* chunk, int offset);

#endif