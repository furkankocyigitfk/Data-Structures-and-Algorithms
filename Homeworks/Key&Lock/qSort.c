void qSort(int *key, int *lock, int lo, int hi, int n)
{
	if (lo < hi)
	{
		int q;
		srand(time(NULL));
		q = key[rand() % (hi - lo) + lo];

		printf("Pivot is %d\n", q);
		printf("Lock array before partition ");
		print(lock, n);

		q = partition(lock, lo, hi, q);
		printf("Lock array after partition  ");
		print(lock, n);

		printf("Key array before partition  ");
		print(key, n);

		partition(key, lo, hi, lock[q]);
		printf("Key array after partition   ");
		print(key, n);
		printf("\n");

		qSort(key, lock, lo, q - 1, n);
		qSort(key, lock, q + 1, hi, n);
	}
}
