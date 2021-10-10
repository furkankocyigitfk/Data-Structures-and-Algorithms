#include "header.h"

int main()
{
    Graph *g = createGraph();
    bfs(0, *g);
    dfs(0, *g);

    return 0;
}