﻿#include <stdio.h>
#include "bubblesort.h"
int main()
{
    int a[8] = {1,3,5,7,2,4,6,8};
    BubbleSort(a,8,sizeof(int),comp);
    for(int i = 0; i < 8; ++i)
        printf("%d\n",a[i]);
    return 0;
}
