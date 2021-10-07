void importFile(char *fname, Graph *g)
{
	FILE *fp = fopen(fname, "r");

	if (fp == NULL)
	{
		printf("File could not be opened!\n");
		fclose(fp);
		return;
	}
	int i, j;
	g->str = (char **)malloc(sizeof(char *) * WORDSIZE);

	for (i = 0; i < WORDSIZE; i++)
	{
		g->str[i] = (char *)malloc(sizeof(char) * 6);
	}
	i = 0;

	while (!feof(fp))
	{
		fscanf(fp, "%s", g->str[i]);
		g->str[i][5] = '\0';
		i++;
	}
	fclose(fp);

	g->V = i;
	g->matrix = (char **)malloc(sizeof(char *) * g->V);
	for (i = 0; i < g->V; i++)
	{
		g->matrix[i] = (char *)malloc(sizeof(char) * g->V);
	}

	for (i = 0; i < g->V; i++)
	{
		for (j = 0; j < g->V; j++)
		{
			if (i != j && findDistance(g->str[i], g->str[j]) == 1)
			{
				g->matrix[i][j] = 1;
			}
			else
			{
				g->matrix[i][j] = 0;
			}
		}
	}
}
