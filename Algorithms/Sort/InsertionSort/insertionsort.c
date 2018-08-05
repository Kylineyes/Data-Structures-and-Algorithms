#include "insertionsort.h"

STATE InsertionSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *))
{
    char* p = base;
    void* temp = NULL;
    temp = malloc(width);
    if(temp == NULL)
	    return FAILURE;
    for(size_t i = 1; i < size; ++i)
    {
        memcpy(temp, p + i * width, width);
        size_t j = i;
        while(j > 0 && comp(p + (j - 1) * width, temp))
        {
            memcpy(p + j * width, p + (j - 1) * width, width);
            --j;
        }
        memcpy(p + j * width, temp, width);
    }
    free(temp);
    temp = NULL;
    return SUCCESS;
}

int comp(const void* a, const void* b)
{
    return (*(ElemType*)a) > (*(ElemType*)b);
}
