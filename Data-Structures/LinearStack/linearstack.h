#ifndef LINEARSTACK_H
#define LINEARSTACK_H
#include <malloc.h>
#include <stdlib.h>

#define STATE int
#define ElemType int
#define SUCCESS 0
#define FAILURE 1
#define MININUM 4
typedef struct
{
    ElemType* _stack;
    int size;
    int length;
}LinearStack;

LinearStack* StackCreate();

void StackDestory(LinearStack* stack);

STATE StackPush(LinearStack* stack, ElemType value);

STATE StackTop(LinearStack* stack, ElemType* ref);

STATE StackPop(LinearStack* stack);

#endif // LINEARSTACK_H
