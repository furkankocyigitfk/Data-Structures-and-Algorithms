int *create()
{
	int i;
	int *arr = (int *)malloc(sizeof(int) * MAXSIZE);
	for (i = 0; i < MAXSIZE; i++)
	{
		arr[i] = rand() % 100;
	}
	return arr;
}
