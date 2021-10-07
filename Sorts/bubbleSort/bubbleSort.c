void bubbleSort(int *arr)
{
	int i, j, temp;
	for (i = 0; i < MAXSIZE; i++)
	{
		for (j = 0; j < MAXSIZE - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1);
			}
		}
	}
}
