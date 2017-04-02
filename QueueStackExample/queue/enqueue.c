#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
  QueueNodePtr newPtr;
  newPtr = malloc(sizeof(QueueNode));
  if(newPtr != NULL)
  {
    newPtr->data = value;
    newPtr->nextPtr = NULL;

    if(isEmpty(*headPtr))
      *headPtr = newPtr;
    else
      (*tailPtr)->nextPtr = newPtr;

    *tailPtr = newPtr;
  }
  else
    printf("%c not inserted. No memory available.\n", value);
}
