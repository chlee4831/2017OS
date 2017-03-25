#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int pop(StackNodePtr *topPtr)
{
  StackNodePtr tempPtr;
  int popValue;

  tempPtr = *topPtr;
  popValue = (*topPtr)->data;
  *topPtr = (*topPtr)->nextPtr;
  free(tempPtr);
  return popValue;
}
