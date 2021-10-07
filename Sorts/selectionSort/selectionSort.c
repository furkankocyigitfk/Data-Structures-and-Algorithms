void selectionSort(int *arr)
{
	int i, j, min;
	for (i = 0; i < MAXSIZE - 1; i++)
	{
		min = i;
		j = i + 1;
		while (j < MAXSIZE)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
			j++;
		}
		swap(arr, i, min);
	}
}
