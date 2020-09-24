#include "header.h"

int main(){
	int key[] = {7, 5, 1, 3, 2, 6, 0, 4};
	int lock[] = {2, 3, 1, 7, 5, 4, 6, 0};
	int n = 8;
	
	qSort(key, lock, 0, n-1, n);
	
	printf("\nLast state of arrays:\nKey array:\n");
	print(key, n);
	printf("Lock array:\n");
	print(lock ,n);
	
	
	return 0;
}
