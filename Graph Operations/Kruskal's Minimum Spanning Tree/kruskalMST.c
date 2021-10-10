struct edge
{
    int src;
    int dest;
    int weight;
};
struct subset
{
    int parent;
    int rank;
};

typedef struct edge Edge;
typedef struct subset Subset;

void swap(Edge *e1, Edge *e2)
{
    Edge temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}

void sort(Edge *edges, int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (edges[i].weight > edges[j].weight)
            {
                swap(&edges[i], &edges[j]);
            }
        }
    }
}

int findParent(Subset *subsets, int child)
{
    if (subsets[child].parent != child) // if child's parent is not itself call parent
    {
        subsets[child].parent = findParent(subsets, subsets[child].parent);
    }
    return subsets[child].parent;
}

void unionSubsets(Subset *subsets, int v1, int v2)
{
    int x = findParent(subsets, v1); // find first node's parent
    int y = findParent(subsets, v2); // find second node's parent

    if (subsets[x].rank > subsets[y].rank) // if x is higher tree
    {
        subsets[y].parent = x; // y's parent is x
    }
    else if (subsets[x].rank < subsets[y].rank) // else x's parent y
    {
        subsets[x].parent = y;
    }
    else // if equals y's parent x. increase x's high
    {
        subsets[y].parent = x;
        subsets[x].rank++;
    }
}
Edge *convertAdjMatrixToEdges(Graph g, int *num_edges)
{
    int i, j, k = 0, n = 0;
    for (i = 0; i < g.V - 1; i++)
    {
        for (j = i + 1; j < g.V; j++)
        {
            if (g.adjMatrix[i][j] != 0)
            {
                n++;
            }
        }
    }
    Edge *edges = (Edge *)malloc(sizeof(Edge) * n);

    for (i = 0; i < g.V - 1; i++)
    {
        for (j = i + 1; j < g.V; j++)
        {
            if (g.adjMatrix[i][j] != 0)
            {
                edges[k].src = i;
                edges[k].dest = j;
                edges[k++].weight = g.adjMatrix[i][j];
            }
        }
    }
    *num_edges = n;
    return edges;
}
void Kruskal(Graph g)
{
    int i = 0;
    int j = 0;
    int x, y;
    int num_edges = 0;
    Edge result[g.V];
    Edge next;
    Subset *subsets = (Subset *)malloc(sizeof(Subset) * g.V);
    Edge *edges = convertAdjMatrixToEdges(g, &num_edges);
    sort(edges, num_edges);

    for (i = 0; i < g.V; i++)
    {
        subsets[i].rank = 0;
        subsets[i].parent = i;
    }
    i = 0;

    while (i < g.V - 1 && j < num_edges)
    {
        next = edges[j++];
        x = findParent(subsets, next.src);
        y = findParent(subsets, next.dest);

        if (x != y)
        {
            result[i++] = next;
            unionSubsets(subsets, x, y);
        }
    }

    for (j = 0; j < i; j++)
    {
        printf("%d %d %d\n", result[j].src, result[j].dest, result[j].weight);
    }
}