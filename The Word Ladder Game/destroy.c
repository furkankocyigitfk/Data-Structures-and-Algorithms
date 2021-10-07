void destroy(Node **head)
{
	Node *current = *head;
	while (current->next != NULL)
	{
		*head = current->next;
		free(current);
		current = *head;
	}
	free(*head);
	*head = NULL;
}
