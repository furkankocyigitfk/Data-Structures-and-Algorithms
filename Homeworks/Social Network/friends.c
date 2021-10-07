void friends(Node *root, int id)
{
	Node *temp = contains(root, id);
	if (temp != NULL)
	{
		int i;
		for (i = 0; i < temp->numOfFriends; i++)
		{
			printNode(contains(root, temp->friends[i]));
		}
	}
}
