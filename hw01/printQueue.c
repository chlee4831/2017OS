#include <stdio.h>
#include "queue.h"

void printQueue(QueueNodePtr currentPtr)
{
  if(currentPtr == NULL)
    printf("Queue is empty.\n\n");
  else
  {
    printf("The queue is : \n");

    while(currentPtr != NULL)
    {
      printf("%c --> ", currentPtr->data);
      currentPtr = currentPtr->nextPtr;
    }

    printf("NULL\n\n");
  }
}
