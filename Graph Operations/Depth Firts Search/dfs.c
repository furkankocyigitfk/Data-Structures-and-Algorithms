void dfs(int start, Graph g)
{
    char visited[g.V];
    int i;
    int u;

    for (i = 0; i < g.V; i++)
    {
        visited[i] = 0;
    }
    Node *top = createStack(start);
    visited[start] = 1;

    while (top != NULL)
    {
        //print(q);
        u = top->data;
        printf("%d visited.\n", u);
        pop(&top);
        for (i = 0; i < g.V; i++)
        {
            if (visited[i] == 0 & g.adjMatrix[u][i] != 0)
            {
                push(&top, i);
                visited[i] = 1;
            }
        }
    }
}