void destroy(Node **top){
	Node *current = *top;
	while(current != NULL){
		current = current->next;
		free(*top);
		*top = current;
	}
	free(*top);
	*top = NULL;
}
