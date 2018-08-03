#ifndef INSERTSORT_H
#define INSERTSORT_H
#include <malloc.h>
#include <string.h>
#define ElemType int

// example
int comp(const void* a, const void* b);

void InsertSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *));

#endif // INSERTSORT_H
