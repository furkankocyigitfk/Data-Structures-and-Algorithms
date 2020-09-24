void inOrder(Node* root){
	if(root == NULL){
		return;
	}
	preOrder(root->left);
	printf("%d ", root->data);
	preOrder(root->right);
}
