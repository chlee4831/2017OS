typedef struct queueNode
{
  char data;
  struct queueNode *nextPtr;
}QueueNode;

typedef QueueNode *QueueNodePtr;

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
int isEmpty(QueueNodePtr headPtr);
