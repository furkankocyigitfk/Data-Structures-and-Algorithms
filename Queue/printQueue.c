void print(const Queue* q){
	if(q->front == NULL){
		printf("Queue is free.\n");
		return;
	}
	struct node* iter = q->front;
	printf("Queue: ");
	while(iter->next != NULL){
		printf("%d ", iter->data);
		iter = iter->next;
	}
	printf("%d\n", iter->data);
}
