﻿#include <stdio.h>
#include <stdlib.h>
#include "bubblesort.h"
int main()
{
    int a[8] = {1,3,5,7,2,4,6,8};
    if(BubbleSort(a,8,sizeof(int),comp) == FAILURE)
    {
	    printf("Memory limited Exceeded\n");
	    return EXIT_FAILURE;
    }
    for(int i = 0; i < 8; ++i)
        printf("%d\n",a[i]);
    return EXIT_SUCCESS;
}
