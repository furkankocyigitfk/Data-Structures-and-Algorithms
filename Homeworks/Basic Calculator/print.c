void print(const Node *top, int flag)
{
	if (top == NULL)
	{
		printf("Stack is free.\n");
		return;
	}

	if (flag == TRUE)
	{
		printf("Stack of numbers:\n");
		while (top->next != NULL)
		{
			printf("%d ", top->data);
			top = top->next;
		}
		printf("%d\n", top->data);
	}
	else
	{
		printf("Stack of signs:\n");
		while (top->next != NULL)
		{
			printf("%c ", top->data);
			top = top->next;
		}
		printf("%c\n", top->data);
	}
}
