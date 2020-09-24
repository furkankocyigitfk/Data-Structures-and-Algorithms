void print(const struct Node* head){
	if(head == NULL ){
		printf("List is free!\n");
		return;
	}
	printf("List:\n");
    while(head->next != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("%d\n", head->data);
}
