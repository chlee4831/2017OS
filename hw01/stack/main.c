#include <stdio.h>
#include "stack.h"

void main()
{
  StackNodePtr stackPrt = NULL;
  int choice, value;

  instructions();
  printf("? ");
  scanf("%d", choice);

  while(choice != 3)
  {
    switch(choice)
    {
      case 1:
        printf("Enter an integet : ");
        scanf("%d, &value");
        push(&stackPtr, value);
        printStack(stackPtr);
        break;

      case 2:
        if(!isEmpty(stackPtr))
          printf("The popped value is %d.\n", pop(&stackPtr));

        printStack(stackPtr);
        break;

      default:
        printf("Invalid choice, \n\n");
        instructions();
        break;
    }
  }

    printf("End of run.\n");
}
