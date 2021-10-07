void minBuildHeap(int *arr, int size)
{
	int i;
	for (i = size; i > 0; i--)
	{
		minHeapify(arr, i, size);
	}
}
