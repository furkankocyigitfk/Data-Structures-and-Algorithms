int find(Graph g, char *str)
{
	int i = 0;

	while ((i < g.V) && (strcmp(g.str[i], str) != 0))
		i++;
	return i == g.V ? NOTFOUND : i;
}
