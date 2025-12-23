#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef char ElemType;
#define ListSize 100

typedef struct _SeqList {
    ElemType* elem;
    int length;
    int maxSize;
} SeqList;

void InitList(SeqList& L);
void Free(SeqList& L);
int Find(SeqList& L, ElemType x);
bool  insertSeqList(SeqList& L, ElemType x, int i);
bool Delete(SeqList& L, int i, ElemType& X);
void print(SeqList& L);
void reverse(SeqList& L);