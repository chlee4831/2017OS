typedef struct stackNode
{
  int data;
  struct stackNode *nextPtr;
}StackNode;

typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr, int info);
