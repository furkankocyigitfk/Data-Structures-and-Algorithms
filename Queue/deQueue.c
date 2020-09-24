void dequeue(Queue *q){
	if(q->front == NULL){
		printf("Queue is free. Cannot be dequeued.\n");
		q->rear = NULL;
		return;
	}
	struct node* temp = q->front;
	q->front = q->front->next;
	free(temp);
	if(q->front == NULL){
		q->rear = NULL;
	}
}
