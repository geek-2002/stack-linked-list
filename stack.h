#include "stackconfig.h"

typedef struct Stack Stack;
typedef struct Node Node;

#ifdef INT_STACK
typedef int stackType;
#define TYPE_FMT "%d"
#else
typedef char stackType;
#define TYPE_FMT "%c"
#endif
#define MAX 100
/*struct Node {
    stackType data;
    Node* next;
};*/

struct Stack {
    stackType array[MAX];
	int top;
};
void push(Stack* stack, stackType data);
stackType pop(Stack* stack);
stackType peek(Stack* stack);
int isEmpty(Stack* stack);
int isFull(Stack* stack);
void print(Stack* stack);
