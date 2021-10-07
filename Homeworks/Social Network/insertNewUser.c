Node *insertNewUser(Node *root, int id, char *name, int numOfFriends, char *friends)
{
	if (root == NULL)
	{
		return createNewUser(id, name, numOfFriends, friends);
	}
	if (root->id < id)
	{
		root->right = insertNewUser(root->right, id, name, numOfFriends, friends);
	}
	else if (root->id > id)
	{
		root->left = insertNewUser(root->left, id, name, numOfFriends, friends);
	}

	return root;
}
