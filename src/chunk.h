#ifndef CLEX_CHUNK_H
#define CLEX_CHUNK_H

#include "common.h"
#include "value.h"

// define operation code
typedef enum {
    OP_CONSTANT,
    OP_NIL,
    OP_TRUE,
    OP_FALSE,
    OP_POP,
    OP_GET_LOCAL,
    OP_SET_LOCAL,
    OP_GET_GLOBAL,
    OP_DEFINE_GLOBAL,
    OP_SET_GLOBAL,
    OP_EQUAL,
    OP_GREATER,
    OP_LESS,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_NOT,
    OP_NEGATE,
    OP_PRINT,
    OP_JUMP,
    OP_JUMP_IF_FALSE,
    OP_LOOP,
    OP_RETURN,// means return from the current function
} OpCode;

// design a dynamic array
// define struct to hold a instruction
typedef struct {
    int count;    // the number of actually use elemnets in the array
    int capacity; // the number of allocated elements in the array
    uint8_t* code;// to store the operation code and operand index
    int* lines;   // the compiler will track the current line as it parses this instruction
    ValueArray constants;// contant pool：to store the chunk's constant
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);

#endif