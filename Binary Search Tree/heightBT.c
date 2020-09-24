int height(Node* root){
	if(root == NULL){
		return 0;
	}
	return MAX(height(root->left), height(root->right)) + 1;
}
