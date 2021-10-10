void printAdjMatrix(char **adjMatrix, int V)
{
    int i, j;
    for (i = 0; i < V; i++)
    {
        for (j = 0; j < V; j++)
        {
            if (adjMatrix[i][j])
            {
                printf("%d -> %d\n", i, j);
            }
        }
    }
}