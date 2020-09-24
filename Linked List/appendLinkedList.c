void append(struct Node** head, int data){
	struct Node* iter = *head;
	struct Node* newNode = (struct Node*) malloc (sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;
	
	if(*head == NULL){
		*head = newNode;
		return;
	}
	
	while(iter->next != NULL){
		iter = iter->next;
	}
	iter->next = newNode;
	
}
