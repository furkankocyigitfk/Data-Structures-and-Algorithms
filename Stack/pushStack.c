void push(Node** top, int data){
	Node* newnode = create(data);
	if(*top == NULL){
		*top = newnode;
		return ;
	}
	newnode->next = *top;
	*top = newnode;
}
