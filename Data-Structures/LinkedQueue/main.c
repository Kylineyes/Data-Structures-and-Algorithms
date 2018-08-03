#include <stdio.h>
#include "linkedqueue.h"
// a sample example.
int main()
{
   Queue* tmpQueue = NULL;
   tmpQueue = QueueCreate();
   QueuePush(tmpQueue, 111);
   QueuePush(tmpQueue, 222);
   QueuePush(tmpQueue, 333);
   int testVal = -123;
   QueueFronter(tmpQueue, &testVal);
   printf("%d \n",testVal);
   while(QueueFronter(tmpQueue, &testVal) != Failed)
   {
       QueuePop(tmpQueue);
       printf("%d\n",testVal);
   }
   QueueDestory(tmpQueue);
   return 0;
}

