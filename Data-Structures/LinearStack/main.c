#include <stdio.h>
#include "linearstack.h"
// An sample example.
int main()
{
    LinearStack* tmpStack = NULL;
    tmpStack = StackCreate();
    StackPush(tmpStack, 111);
    StackPush(tmpStack, 222);
    StackPush(tmpStack, 333);
    StackPush(tmpStack, 444);
    StackPush(tmpStack, 555);
    int testVal = -123;
    StackTop(tmpStack, &testVal);
    printf("%d\n",testVal);

    while (StackTop(tmpStack, &testVal) != Failed)
    {
        StackPop(tmpStack);
        printf("%d\n",testVal);
    }
    StackDestory(tmpStack);
    tmpStack = NULL;
    return 0;
}
