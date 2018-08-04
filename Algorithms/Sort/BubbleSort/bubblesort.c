#include "bubblesort.h"

STATE BubbleSort(void* base, size_t size, size_t width, int (*comp)(const void *, const void *))
{
    char* p = base;
    void* temp = NULL;
    temp = malloc(width);
    if(temp == NULL)
        return FAILURE;
    for(size_t i = 0; i < size; ++i)
        for(size_t j = i + 1; j < size; ++j)
        {
            if(comp(p + i * width, p + j * width))
            {
                memcpy(temp, p + i * width, width);
                memcpy(p + i * width, p + j * width, width);
                memcpy(p + j * width, temp, width);
            }
        }
    free(temp);
    temp = NULL;
    return SUCCESS;
}

int comp(const void* a, const void* b)
{
    return (*(ElemType*)a) > (*(ElemType*)b);
}
