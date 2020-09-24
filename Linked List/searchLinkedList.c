struct Node *search(struct Node *head, int data){
	struct Node* iter = head;
	if(iter == NULL){
		printf("List is free!\n");
		return NULL;
	}
	while((iter != NULL) && (iter->data != data)){
		iter = iter->next;
	}
	if(iter != NULL){
		printf("Node Found.\n");
		return iter;
	}else{
		printf("Not Found.\n");
		return NULL;
	}
}
