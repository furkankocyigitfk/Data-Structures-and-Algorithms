void printPreOrder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	printNode(root);
	printPreOrder(root->left);
	printPreOrder(root->right);
}
