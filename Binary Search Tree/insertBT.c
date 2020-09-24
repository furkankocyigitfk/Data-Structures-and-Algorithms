Node* insert(Node* root, int data){
	if(root == NULL){
		root = (Node *) malloc (sizeof(Node));
		root->data = data;
		root->left = NULL;
		root->right = NULL;
		return root;
	}
	if(root->data > data){
		root->left = insert(root->left, data);
	}
	else{
		root->right = insert(root->right, data);
	}
	return root;
}
