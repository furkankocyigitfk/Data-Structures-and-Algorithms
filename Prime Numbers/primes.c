void primes(int N)
{
	int arr[MAX];
	int i, j;
	arr[0] = 0; //1 and 0 is not prime.
	arr[1] = 0;

	for (i = 2; i < N; i++)
	{
		arr[i] = 1;
	}

	for (i = 2; i * i <= N; i++)
	{ //from 2 to square root of N
		if (isPrime(i))
		{
			for (j = i * 2; j < N; j += i)
			{
				arr[j] = 0;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i] == 1 ? i : arr[i]);
	}
}
