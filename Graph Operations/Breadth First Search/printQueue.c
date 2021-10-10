void printQueue(const Queue *q)
{
	if (q->front == NULL)
	{
		return;
	}
	Node *iter = q->front;
	printf("Queue: ");
	while (iter->next != NULL)
	{
		printf("%d ", iter->data);
		iter = iter->next;
	}
	printf("%d\n", iter->data);
}
