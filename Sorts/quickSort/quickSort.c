void qSort(int *arr, int lo, int hi)
{
	if (lo < hi)
	{
		int q = partition(arr, lo, hi);
		qSort(arr, lo, q - 1);
		qSort(arr, q + 1, hi);
	}
}

void quickSort(int *arr)
{
	qSort(arr, 0, MAXSIZE - 1);
}
