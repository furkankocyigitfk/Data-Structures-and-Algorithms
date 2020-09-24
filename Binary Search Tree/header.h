#include<stdio.h>
#include<stdlib.h>

#define MAX(a, b)((a) > (b) ? (a) :(b))

struct node{
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node Node;

#include "insertBT.c"
#include "preorderBT.c"
#include "inorderBT.c"
#include "postorderBT.c"
#include "findMinBT.c"
#include "findMaxBT.c"
#include "heightBT.c"
#include "searchBT.c"
#include "deleteBT.c"
