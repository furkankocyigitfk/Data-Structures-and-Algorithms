int length(const Node* top){
	if(top == NULL){
		return 0;
	}
	int len = 1;
	while(top->next != NULL){
		top = top->next;
		len++;
	}
	return len;
}
