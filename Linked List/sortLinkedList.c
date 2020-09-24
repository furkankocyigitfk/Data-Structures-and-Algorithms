void sort(struct Node *head){
	struct Node *iter = head, *next;
	int temp;
	while(iter != NULL){
		next = iter->next;
		while(next != NULL){
			if(iter->data > next->data){
				temp = iter->data;
				iter->data = next->data;
				next->data = temp;
			}
			next = next->next;
		}
		iter = iter->next;
	}
}
