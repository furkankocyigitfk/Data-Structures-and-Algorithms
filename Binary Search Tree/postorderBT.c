void postOrder(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	preOrder(root->left);
	preOrder(root->right);
	printf("%d ", root->data);
}
