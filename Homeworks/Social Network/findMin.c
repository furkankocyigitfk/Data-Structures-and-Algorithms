Node *findMin(Node *root)
{
	while (root->left != NULL)
	{
		root = root->left;
	}
	return root;
}
