int isSorted(int *arr){
	int i = 1;
	while((i < MAXSIZE - 1) && (arr[i] >= arr[i - 1])){
		i++;
	}
	if(i == MAXSIZE-1)
		return 1;
	else
		return 0;
}
