void pop(Node **top)
{
	if (*top == NULL)
	{
		printf("Stack is free. Cannot be popped!\n");
		return;
	}
	Node *temp = *top;
	*top = (*top)->next;
	free(temp);
}
