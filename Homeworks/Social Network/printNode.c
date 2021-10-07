void printNode(Node *myNode)
{
	if (myNode == NULL)
	{
		return;
	}
	int i;
	printf("%d, ", myNode->id);
	printf("%s, ", myNode->name);
	for (i = 0; i < myNode->numOfFriends; i++)
	{
		printf("%d ", myNode->friends[i]);
	}
	printf("\n");
}
