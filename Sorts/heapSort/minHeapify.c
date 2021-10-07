void minHeapify(int *arr, int start, int size)
{
	int left, right, lowest, temp;
	left = 2 * start;
	right = 2 * start + 1;
	if (left <= size && arr[start] > arr[left])
	{
		lowest = left;
	}
	else
	{
		lowest = start;
	}
	if (right <= size && arr[lowest] > arr[right])
	{
		lowest = right;
	}
	if (lowest != start)
	{
		swap(arr, start, lowest);
		minHeapify(arr, lowest, size);
	}
}
