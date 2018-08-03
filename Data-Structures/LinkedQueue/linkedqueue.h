#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include <malloc.h>
#include <stdlib.h>

#define STATE int
#define ElemType int
#define Success 0
#define Failed 1
#define MININUM 4

typedef struct __LQNode
{
    struct __LQNode* pnext;
    ElemType value;
}_LQNode;

typedef struct
{
    _LQNode* header;
    _LQNode* tailer;
    size_t length;
}Queue;

Queue* QueueCreate();

void QueueDestory(Queue* queue);
_LQNode* _LQNodeCreate(ElemType value);
STATE QueuePush(Queue* queue, ElemType value);
STATE QueueFronter(Queue* queue, ElemType* ref);
STATE QueuePop(Queue* queue);

#endif // LINKEDQUEUE_H
