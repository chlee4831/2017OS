#include <stdio.h>
#include "stack.h"

void printStack(StackNodePtr currentPtr)
{
  if(currentPtr == NULL)
    printf("The stack is empty.\n\n");
  else
  {
    printf("The stack is : \n");

    while(currentPtr != NULL)
    {
      printf("%d --> ", currentPtr->data);
      currentPtr = currentPtr->nextPtr;
    }

    printf("NULL\n\n");
  }
}
