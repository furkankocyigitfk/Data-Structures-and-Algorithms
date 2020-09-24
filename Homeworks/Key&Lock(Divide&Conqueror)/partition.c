int partition(int *arr, int lo, int hi, int x){
	int i = lo-1;
	int j;
	int index;
	
	for(j=lo; j<=hi; j++){
		if(arr[j] < x){
			i++;
			swap(arr, i, j);
		}
		if(arr[j] == x){
			index=j;
		}
	}
	swap(arr, i+1, index);

	return i+1;
}
