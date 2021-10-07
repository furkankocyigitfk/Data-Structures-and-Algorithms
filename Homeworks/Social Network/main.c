#include "header.h"

int main()
{
	Node *root = NULL;
	char *fname = "Input.txt";
	importFile(&root, fname);
	printf("Size %d\n\n", size(root));
	printPreOrder(root);
	deleteUser(root, 31);

	//friends(root, 3);
	printf("\nSize %d ", size(root));

	return 0;
}
