#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct queue
{
	struct node *rear;
	struct node *front;
};

typedef struct queue Queue;

#include "createQueue.c"
#include "enQueue.c"
#include "printQueue.c"
#include "deQueue.c"
#include "lengthQueue.c"
