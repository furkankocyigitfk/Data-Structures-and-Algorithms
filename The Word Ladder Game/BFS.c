void BFS(Graph g, char *str1, char *str2)
{
	int x = find(g, str1);
	int y = find(g, str2);

	if ((x == NOTFOUND) || (y == NOTFOUND))
	{
		printf("Words could not be found at matrix.\n");
		return;
	}

	int i;
	int u;
	int dist[g.V];
	int parent[g.V];
	char flag = NOTFOUND;
	Queue *q = (Queue *)malloc(sizeof(Queue));
	Node *path = (Node *)malloc(sizeof(Node));

	for (i = 0; i < g.V; i++)
	{
		dist[i] = INF;
		parent[i] = NOTFOUND;
	}

	path = NULL;
	q->front = NULL;
	q->rear = NULL;
	enqueue(q, x);
	dist[x] = 0;

	while ((q->rear != NULL) && (flag == NOTFOUND))
	{
		u = q->front->data;
		dequeue(q);
		i = 0;
		while ((i < g.V) && (flag == NOTFOUND))
		{
			if (dist[i] == INF && g.matrix[u][i] == 1)
			{
				dist[i] = dist[u] + 1;
				parent[i] = u;
				enqueue(q, i);
				if (u == y)
				{
					flag = TRUE;
				}
			}
			i++;
		}
	}
	if (q->rear == NULL)
	{
		printf("No similarity.\n");
		return;
	}

	printf("%d changes were made.\n", dist[y]);
	push(&path, y);
	do
	{
		y = parent[y];
		push(&path, y);
	} while (parent[y] != -1);

	printf("Path:\n");
	print(path, g);

	destroy(&path);
	while (q->front != NULL)
	{
		dequeue(q);
	}
}
