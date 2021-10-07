int numberOfFriends(char *friends)
{
	int count = 0;
	int i;

	for (i = 0; i < strlen(friends); i++)
	{
		if (friends[i] == '-')
		{
			count++;
		}
	}
	return count + 1;
}
