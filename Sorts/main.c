#include "header.h"

int main(){
	int *arr = create();
	print(arr);
	
	//selectionSort(arr);
	//bubbleSort(arr);
	//insertionSort(arr);
	//quickSort(arr);
	topDownMerge(arr);
	//bottomUp(arr,MAXSIZE);
	//heapSort(arr, MAXSIZE);
	print(arr);
	
	
	
	free(arr);
	return 0;
}
