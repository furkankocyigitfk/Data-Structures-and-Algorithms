#include "header.h"

int main(){
	Queue* q = create();
	enqueue(q, 20);
	enqueue(q, 30);
	enqueue(q, 40);
	printf("Length of Queue is %d.\n",length(q));
	print(q);
	dequeue(q);
	dequeue(q);
	//dequeue(q);
	print(q);
	return 0;
}
