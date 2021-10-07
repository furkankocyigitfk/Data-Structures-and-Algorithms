#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORDSIZE 2500
#define INF 10000005

#define NOTFOUND -1
#define TRUE 1
#define FALSE 0

struct node
{
	int data;
	struct node *next;
};

typedef struct node Node;

struct queue
{
	Node *rear;
	Node *front;
};

struct graph
{
	int V;
	char **str;
	char **matrix;
};

typedef struct queue Queue;
typedef struct graph Graph;

#include "push.c"
#include "enqueue.c"
#include "dequeue.c"
#include "destroy.c"
#include "print.c"
#include "find.c"
#include "isConnected.c"
#include "findDistance.c"
#include "importFile.c"
#include "BFS.c"
