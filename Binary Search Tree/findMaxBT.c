Node* findMax(Node *root){
	Node* iter = root;
	if(root == NULL){
		return root;
	}
	while(iter->right != NULL){
		iter = iter->right;
	}
	return iter;
}
