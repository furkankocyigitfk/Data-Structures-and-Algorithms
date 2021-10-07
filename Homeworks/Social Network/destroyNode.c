void destroyNode(Node *myNode)
{
	free(myNode->name);
	free(myNode->friends);
	free(myNode->left);
	free(myNode->right);
	free(myNode);
}
