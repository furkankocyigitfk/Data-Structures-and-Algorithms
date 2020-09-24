void enqueue(Queue *q, int data){
	struct node* newnode = (struct node*) malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = NULL;
	
	if(q->rear == NULL){
		q->front = newnode;
		q->rear = newnode;
		return;
	}
	q->rear->next = newnode;
	q->rear = newnode;
	
}
