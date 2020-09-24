void printInOrder(Node *root){
	if(root == NULL){
		return;
	}	
	printInOrder(root->left);
	printNode(root);
	printInOrder(root->right);
}
