Node *search(Node *root, int data)
{
	if (root == NULL)
	{
		return root;
	}
	if (root->data > data)
	{
		return search(root->left, data);
	}
	if (root->data < data)
	{
		return search(root->right, data);
	}
	return root;
}
