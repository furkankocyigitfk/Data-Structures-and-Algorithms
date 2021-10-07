#include "header.h"

int main()
{
	Node *top = create(10);
	push(&top, 25);
	push(&top, 45);
	printf("Length of stack is %d\n", length(top));
	print(top);
	pop(&top);
	return 0;
}
