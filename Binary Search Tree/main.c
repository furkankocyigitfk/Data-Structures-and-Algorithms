#include "header.h"

int main()
{
	Node *root = NULL;
	root = insert(root, 20);
	root = insert(root, 40);
	root = insert(root, 50);
	root = insert(root, 10);
	root = insert(root, 30);

	printf("BT is printing by being preorder.\n");
	preOrder(root);
	printf("\n");
	printf("Minimum value of BT is %d\n", findMin(root)->data);
	printf("Maximum value of BT is %d\n", findMax(root)->data);
	printf("Height of BT is %d\n", height(root));

	int data = 35;
	if (search(root, data) != NULL)
	{
		printf("%d is found at BT.\n");
	}
	else
	{
		printf("%d is not found at BT.\n", data);
	}
	root = del(root, 20);
	preOrder(root);
	return 0;
}
