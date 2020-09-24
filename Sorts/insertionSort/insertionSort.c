void insertionSort(int *arr){
	int i, j, key;
	for(i=1; i<MAXSIZE; i++){
		key = arr[i];
		j = i-1;
		while((j >= 0)&&(key < arr[j])){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}
