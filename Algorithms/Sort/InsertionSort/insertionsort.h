#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include <malloc.h>
#include <string.h>
#define ElemType int
#define STATE int
#define SUCCESS 0
#define FAILURE 1
// example
int comp(const void* a, const void* b);
STATE InsertionSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *));
#endif // INSERTIONSORT_H
