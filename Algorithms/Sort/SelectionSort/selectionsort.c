#include "selectionsort.h"


int comp(const void *a, const void *b)
{
    return (*(ElemType*)a) > (*(ElemType*)b);
}

STATE SelectionSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *))
{
    char* p = base;
    void* temp = NULL;
    temp = malloc(width);
    if(temp == NULL)
        return FAILURE;
    for(size_t i = 0; i < size; ++i)
    {
        size_t pos = i;
        for(size_t j = pos + 1; j < size; ++j)
        {
            if(comp(p + pos * width, p  + j * width))
                pos = j;
        }
        memcpy(temp, p + i * width, width);
        memcpy(p + i * width, p + pos * width, width);
        memcpy(p + pos * width, temp, width);
    }
    free(temp);
    temp = NULL;
    return SUCCESS;
}