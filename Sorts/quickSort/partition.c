int partition(int *arr, int lo, int hi)
{
	int i, x, j, temp;
	x = hi; //pivot
	i = lo - 1;
	for (j = lo; j <= hi; j++)
	{
		if (arr[j] < arr[x])
		{
			i++;
			swap(arr, i, j);
		}
	}
	i++;
	swap(arr, i, x);
	return i;
}
