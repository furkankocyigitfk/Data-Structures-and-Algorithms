void print(const Node *top, Graph g){
	while(top->next != NULL){
		printf("%s-", g.str[top->data]);
		top = top->next;
	}
	printf("%s\n", g.str[top->data]);
}
