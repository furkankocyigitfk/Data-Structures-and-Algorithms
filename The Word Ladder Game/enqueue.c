void enqueue(Queue *q, int data)
{
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = NULL;

	if (q->rear == NULL)
	{
		q->front = newnode;
		q->rear = newnode;
		return;
	}
	q->rear->next = newnode;
	q->rear = newnode;
}
