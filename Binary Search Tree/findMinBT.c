Node* findMin(Node *root){
	Node* iter = root;
	if(root == NULL){
		return root;
	}
	while(iter->left != NULL){
		iter = iter->left;
	}
	return iter;
}
