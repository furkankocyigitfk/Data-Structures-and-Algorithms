int topDown(int *arr, int l, int h)
{
	if (l < h)
	{
		int mid = (h + l) >> 1;
		topDown(arr, l, mid);
		topDown(arr, mid + 1, h);
		merge(arr, l, mid, h);
	}
}
void topDownMerge(int *arr)
{
	topDown(arr, 0, MAXSIZE - 1);
}
