Node *contains(Node *root, int id)
{
	if ((root == NULL) || (root->id == id))
	{
		return root;
	}

	if (root->id > id)
	{
		return contains(root->left, id);
	}

	if (root->id < id)
	{
		return contains(root->right, id);
	}
}
