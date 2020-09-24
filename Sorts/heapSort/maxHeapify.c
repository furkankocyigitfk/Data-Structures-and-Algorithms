void maxHeapify(int *arr, int start, int size){
	int le, ri, hi, temp;//le=left,ri=right,hi=highest
	le = 2 * start + 1;
	ri = 2 * start + 2;
	if(le <= size && arr[start] < arr[le]){
		hi = le;		  				  
	}						 			 
	else{
		hi = start;
	}
	if(ri <= size && arr[hi] < arr[ri]){
		hi = ri;
	}
	if(hi != start){
		swap(arr, hi, start);
		maxHeapify(arr, hi, size);
	}
}
