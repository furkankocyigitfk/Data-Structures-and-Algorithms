int size(Node *root){
	if(root == NULL)
		return 0;
	return size(root->left) + size(root->right) + 1;
}
