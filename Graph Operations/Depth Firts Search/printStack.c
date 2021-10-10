void printStack(const Node *top)
{
	if (top == NULL)
	{
		// printf("Stack is free.\n");
		return;
	}
	printf("Stack:\n");

	while (top->next != NULL)
	{
		printf("%d\n", top->data);
		top = top->next;
	}
	printf("%d\n", top->data);
}
