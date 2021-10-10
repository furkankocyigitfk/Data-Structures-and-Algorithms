#include <stdio.h>
#include <stdlib.h>

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
    char **adjMatrix;
};

typedef struct queue Queue;
typedef struct graph Graph;

#include "functions.h"