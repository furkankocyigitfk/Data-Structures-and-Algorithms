void printNext(Node *root, int id)
{
	Node *temp = contains(root, id);
	if (temp != NULL)
	{
		printInOrder(temp->left);
		printInOrder(temp->right);
	}
}
