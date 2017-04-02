#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
  char value;
  QueueNodePtr tempPtr;

  value = (*headPtr)->data;
  tempPtr = *headPtr;
  *headPtr = (*headPtr)->nextPtr;

  if(*headPtr == NULL)
    *tailPtr == NULL;

  free(tempPtr);
  return value;
}
