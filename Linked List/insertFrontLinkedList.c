void insertFront(struct Node **head, int data)
{
	struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return;
	}

	newNode->next = *head;
	*head = newNode;
}
