Node* del(Node* root,int data){
	if(root == NULL){
		printf("Not Found.\n");
		return root;
	}
	if(root->data > data){
		root->left = del(root->left, data);
	}
	else if(root->data < data){
		root->right = del(root->right, data);
	}
	else{
		Node* temp;
		if(root->right == NULL){
			temp = root->left;
			free(root);
			return temp;
		}
		else if(root->left == NULL){
			temp = root->right;
			free(root);
			return temp;
		}else{
			temp = findMin(root->right);
			root->data = temp->data;
			root->right = del(root->right, temp->data);
			return root;
		}
	}
	return root;
}
