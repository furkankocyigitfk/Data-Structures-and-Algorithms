Node *createNewUser(int id, char *name, int numOfFriends, char *friends)
{
	Node *newnode = (Node *)malloc(sizeof(Node));
	int i = 0;
	newnode->id = id;
	newnode->numOfFriends = numOfFriends;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->name = (char *)malloc(sizeof(char) * strlen(name));
	strcpy(newnode->name, name);
	newnode->friends = (int *)malloc(sizeof(int) * numOfFriends);
	char *substr = strtok(friends, "-");
	while (substr != NULL)
	{
		newnode->friends[i++] = atoi(substr);
		substr = strtok(NULL, "-\n");
	}
	return newnode;
}
