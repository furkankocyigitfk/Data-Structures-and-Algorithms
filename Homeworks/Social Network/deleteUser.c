Node *deleteUser(Node *root, int id)
{
	if (root == NULL)
		return root;
	if (root->id < id)
	{
		root->right = deleteUser(root->right, id);
	}
	else if (root->id > id)
	{
		root->left = deleteUser(root->left, id);
	}
	else
	{
		Node *temp;
		if (root->left == NULL)
		{
			temp = root->right;
			free(root);
			return temp;
		}
		else if (root->right == NULL)
		{
			temp = root->left;
			free(root);
			return temp;
		}
		else
		{
			int i;
			temp = findMin(root->right);
			root->id = temp->id;
			strcpy(root->name, temp->name);
			for (i = 0; i < temp->numOfFriends; i++)
			{
				root->friends[i] = temp->friends[i];
			}
			root->right = deleteUser(root->right, root->id);
		}
	}
	return root;
}
