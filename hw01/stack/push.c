#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void push(StackNodePtr *topPtr, int info)
{
  StackNodePtr newPtr;
  newPtr = malloc(sizeof(StackNode));
  
  if(newPtr != NULL)
  {
    newPtr->data = info;
    newPtr->nextPtr = *topPtr;
    *topPtr = newPtr;
  }
  else
    printf("%d not inserted. No memory available.\n", info);
}
