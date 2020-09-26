void push(Node **top, int data){
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = NULL;
	
	if(*top == NULL){
		*top = newnode;
		return;
	}
	newnode->next = *top;
	*top = newnode;
}
