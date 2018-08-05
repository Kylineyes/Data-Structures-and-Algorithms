#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <malloc.h>
#include <string.h>
#define ElemType int
#define STATE int
#define SUCCESS 0
#define FAILURE 1
//A sample example.
int comp(const void *a, const void *b);
STATE SelectionSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *));

#endif // SELECTIONSORT_H
