void heapSort(int *arr, int size){
	maxBuildHeap(arr, size);
	int i, temp;
	for(i=1; i<=size; i++){
		swap(arr, 0, size-i+1);
		maxHeapify(arr, 0, size-i);
	}
}
