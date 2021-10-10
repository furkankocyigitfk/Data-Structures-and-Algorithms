void push(Node **top, int data)
{
	Node *newnode = createStack(data);

	if (*top == NULL)
	{
		*top = newnode;
		return;
	}
	newnode->next = *top;
	*top = newnode;
}
