void merge(int *arr, int l, int m, int r){
	int B[r-l+1];//3-5-7
	int i;
	int j;
	int k;
	for(i=0; i<r-l+1; i++){//i<5
		B[i] = arr[i+l];
	}
	i = 0;
	j = m-l+1;
	k = l;
	while(i < m-l+1 && j < r-l+1){
		if(B[i] <= B[j]){
			arr[k] = B[i];
			i++;
		}else{
			arr[k] = B[j];
			j++;
		}
		k++;
	}
	while(i < m-l+1){
		arr[k] = B[i];
		k++;
		i++;
	}
	while(j < r-l+1){
		arr[k] = B[j];
		k++;
		j++;
	}
}
