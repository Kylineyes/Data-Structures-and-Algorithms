#include "linearstack.h"

LinearStack* StackCreate()
{
    LinearStack* tmp = NULL;
    tmp = (LinearStack*)malloc(sizeof(LinearStack));
    if(tmp != NULL)
    {
        tmp->size = MININUM;
        tmp->length = 0;
        tmp->_stack = NULL;
        tmp->_stack = (ElemType*)malloc(sizeof(ElemType) * tmp->size);
        if(tmp->_stack == NULL)
            free(tmp);
    }
    return tmp;
}

void StackDestory(LinearStack* stack)
{
    if(stack != NULL)
        free(stack->_stack);
    free(stack);
}

STATE StackPush(LinearStack* stack, ElemType value)
{
    if(stack->length == stack->size)
    {
        ElemType* tmp = (ElemType*)realloc(stack->_stack, stack->size * 2 * sizeof(ElemType));
        if(tmp == NULL)
            return FAILURE;
        stack->_stack = tmp;
        stack->size *= 2;
    }
    stack->_stack[stack->length] = value;
    stack->length++;
    return SUCCESS;
}

STATE StackTop(LinearStack* stack, ElemType* ref)
{
    if(stack->length == 0)
        return FAILURE;

    *ref = stack->_stack[stack->length - 1];
    return SUCCESS;
}

STATE StackPop(LinearStack* stack)
{
    if(stack->length == 0)
        return FAILURE;

    stack->length--;
    if(stack->size > MININUM && stack->length * 2 < stack->size)
    {
        stack->size /= 2;
        stack->_stack = (ElemType*)realloc(stack->_stack, stack->size * sizeof(ElemType));
    }
    return SUCCESS;
}
