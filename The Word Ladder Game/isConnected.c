int isConnected(Graph g, char *str1, char *str2)
{
	int x = find(g, str1);
	int y = find(g, str2);

	return ((x != NOTFOUND) && (y != NOTFOUND) && (g.matrix[x][y] == 1)) ? TRUE : FALSE;
}
