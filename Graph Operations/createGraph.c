Graph *createGraph()
{
    int i, j;
    char adjMatrix[9][9] = {{0, 1, 0, 0, 0, 0, 0, 1, 0},  //0
                            {1, 0, 1, 0, 0, 0, 0, 1, 0},  //1
                            {0, 1, 0, 1, 0, 1, 0, 0, 1},  //2
                            {0, 0, 1, 0, 1, 1, 0, 0, 0},  //3
                            {0, 0, 0, 1, 0, 1, 0, 0, 0},  //4
                            {0, 0, 1, 1, 1, 0, 1, 0, 0},  //5
                            {0, 0, 0, 0, 0, 1, 0, 1, 1},  //6
                            {1, 1, 0, 0, 0, 0, 1, 0, 1},  //7
                            {0, 0, 1, 0, 0, 0, 1, 1, 0}}; //8

    Graph *g = (Graph *)malloc(sizeof(Graph));
    g->V = 9;
    g->adjMatrix = (char **)malloc(sizeof(char *) * g->V);
    for (i = 0; i < g->V; i++)
    {
        g->adjMatrix[i] = (char *)malloc(sizeof(char) * g->V);
    }

    for (i = 0; i < g->V; i++)
    {
        for (j = 0; j < g->V; j++)
        {
            g->adjMatrix[i][j] = adjMatrix[i][j];
        }
    }

    return g;
}