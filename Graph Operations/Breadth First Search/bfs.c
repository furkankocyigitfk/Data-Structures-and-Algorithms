void bfs(int start, Graph g)
{
    char visited[g.V];
    int i;
    int u;

    for (i = 0; i < g.V; i++)
    {
        visited[i] = 0;
    }
    Queue *q = createQueue();
    enqueue(q, start);
    visited[start] = 1;

    while (q->front != NULL)
    {
        //print(q);
        u = q->front->data;
        printf("%d visited.\n", u);
        dequeue(q);
        for (i = 0; i < g.V; i++)
        {
            if (visited[i] == 0 & g.adjMatrix[u][i] == 1)
            {
                enqueue(q, i);
                visited[i] = 1;
            }
        }
    }
}