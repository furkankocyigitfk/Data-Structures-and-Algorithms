#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXSIZE 255
#define TRUE 1
#define FALSE 0
#define ERROR -1

struct node{
	int id;
	char *name;
	int *friends;
	int numOfFriends;
	struct node *left;
	struct node *right;
};

typedef struct node Node;

#include "numberOfFriends.c"
#include "printNode.c"
#include "destroyNode.c"
#include "createNewUser.c"
#include "insertNewUser.c"
#include "printInOrder.c"
#include "printPreOrder.c"
#include "importFile.c"
#include "contains.c"
#include "friends.c"
#include "size.c"
#include "findMin.c"
#include "deleteUser.c"
#include "printGreater.c"
#include "printNext.c"
