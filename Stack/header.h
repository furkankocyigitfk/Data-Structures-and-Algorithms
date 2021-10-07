#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node Node;
#include "createStack.c"
#include "printStack.c"
#include "pushStack.c"
#include "popStack.c"
#include "lengthStack.c"
