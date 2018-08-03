#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <malloc.h>
#include <string.h>
#define ElemType int

int comp(const void* a, const void* b);

void BubbleSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *));
#endif // BUBBLESORT_H
