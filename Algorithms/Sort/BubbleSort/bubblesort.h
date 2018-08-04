#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <malloc.h>
#include <string.h>
#define ElemType int
#define STATE int
#define FAILURE 1
#define SUCCESS 0
int comp(const void* a, const void* b);

STATE BubbleSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *));
#endif // BUBBLESORT_H
