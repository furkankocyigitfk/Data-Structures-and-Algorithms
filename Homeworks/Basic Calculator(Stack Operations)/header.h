#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

struct node{
	unsigned int data;
	struct node *next;
};

typedef struct node Node;

#include "preprocess.c"
#include "findPriority.c"
#include "isEmpty.c"
#include "signOperation.c"
#include "print.c"
#include "push.c"
#include "pop.c"
#include "destroy.c"
#include "numberOfDigits.c"
#include "convertNumber.c"
#include "operation.c"
