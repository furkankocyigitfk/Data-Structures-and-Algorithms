void bottomUp(int *arr, int n)
{
	int i, j;
	for (i = 1; i < n; i += i)
	{
		for (j = 0; j < n; j += 2 * i)
		{
			merge(arr, j, j + i - 1, MIN(j + i + i - 1, n - 1));
		}
	}
}
