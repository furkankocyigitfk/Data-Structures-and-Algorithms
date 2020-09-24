void reverse(struct Node **head){
	struct Node *current = *head, *next, *before=NULL;
	while(current != NULL){
		next = current->next;
		current->next = before;
		before = current;
		current = next;
	}
	*head = before;
}
