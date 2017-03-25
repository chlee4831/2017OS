#include <stdio.h>
#include "queue.h"

void main()
{
  QueueNodePtr headPtr = NULL, tailPtr = NULL;
  int choice;
  char item;

  instructions();
  printf("? ");
  scanf("%d",&choice);

  while(choice != 3)
  {
    switch(choice)
    {
      case 1:
        printf("Enter a character : ");
        scanf("\n%c", &item);
        enqueue(&headPtr, &tailPtr, item);
        printQueue(headPtr);
        break;

      case 2:
        if(!isEmpty(headPtr))
        {
          item = dequeue(&headPtr, &tailPtr);
          printf("%c has been dequeued.\n", item);
        }
        printQueue(headPtr);
        break;

      default:
        printf("Invalid choice.\n\n");
        instructions();
        break;
    }

    printf("? ");
    scanf("%d", &choice);
  }
  printf("End of run.\n");
}
