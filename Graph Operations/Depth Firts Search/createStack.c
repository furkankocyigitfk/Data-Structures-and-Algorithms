Node *createStack(int data)
{
	Node *top = (Node *)malloc(sizeof(Node));
	top->data = data;
	top->next = NULL;
	return top;
}
