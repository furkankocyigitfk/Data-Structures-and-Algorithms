#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1
#define MAX(a, b) (a) > (b) ? (a) : (b)

struct Node
{
    int data;
    struct Node *next;
};

#include "functions.h"
