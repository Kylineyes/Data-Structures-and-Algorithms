#include "linkedqueue.h"

Queue* QueueCreate()
{
    Queue* tmp = NULL;
    tmp = (Queue*)malloc(sizeof(Queue));
    if(tmp != NULL)
    {
        tmp->header = NULL;
        tmp->tailer = NULL;
        tmp->length = 0;
    }
    return tmp;
}

void QueueDestory(Queue* queue)
{
    _LQNode* tmp = queue->header;
    while(tmp != NULL)
    {
        queue->header = tmp->pnext;
        free(tmp);
        tmp = queue->header;
    }
    free(queue);
}

_LQNode* _LQNodeCreate(ElemType value)
{
    _LQNode* tmp = NULL;
    tmp = (_LQNode*)malloc(sizeof(_LQNode));
    if(tmp != NULL)
    {
        tmp->pnext = NULL;
        tmp->value = value;
    }
    return tmp;
}

STATE QueuePush(Queue* queue, ElemType value)
{
    _LQNode *tmp = NULL;
    tmp = _LQNodeCreate(value);
    if(tmp == NULL)
        return FAILURE;
    if(queue->header == NULL)
    {
        queue->header = tmp;
        queue->tailer = tmp;
    }
    else
    {
        queue->tailer->pnext = tmp;
        queue->tailer = tmp;
    }
    queue->length++;
    return SUCCESS;
}

STATE QueueFronter(Queue* queue, ElemType* ref)
{
    if(queue->header == NULL)
        return FAILURE;
    *ref = queue->header->value;
    return SUCCESS;
}

STATE QueuePop(Queue* queue)
{
    if(queue->header == NULL)
        return FAILURE;
    _LQNode *tmp = queue->header;
    queue->header = tmp->pnext;
    free(tmp);
    queue->length--;
    if(queue->length == 0)
    {
        queue->header = NULL;
        queue->tailer = NULL;
    }
    return SUCCESS;
}
