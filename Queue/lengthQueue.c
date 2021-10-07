int length(Queue *q)
{
	if ((q == NULL) || (q->front == NULL))
	{
		return 0;
	}
	int len = 1;
	struct node *iter = q->front;
	while (iter->next != NULL)
	{
		len++;
		iter = iter->next;
	}
	return len;
}
