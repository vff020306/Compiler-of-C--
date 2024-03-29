#ifndef HASH
#define HASH

#include "type-symbol.h"
#include<stdio.h>

struct HashTableNode_def{
    Symbol symbol_;
    struct HashTableNode_def* nxt;
};
typedef struct HashTableNode_def HashTableNode;

typedef struct{
    HashTableNode* table_[16384];
}HashTable;

HashTable* HashInit();
void HashAdd(HashTable* self, Symbol sym);
HashTableNode* HashFind(HashTable* self, Symbol sym);

#endif