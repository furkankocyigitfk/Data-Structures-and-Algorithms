#include "header.h"

int main()
{
	char *fname = "input.txt";
	char *str = "climb";
	char *str2 = "slime";
	Graph g;

	importFile(fname, &g);
	BFS(g, str, str2);

	return 0;
}
