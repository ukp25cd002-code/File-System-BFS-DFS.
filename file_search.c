
#include <stdio.h>
#include <string.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
char name[MAX][30];
int n, target;

void BFS(int start)
{
    int queue[MAX], front = 0, rear = 0;
    int found = 0;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    visited[start] = 1;
    queue[rear++] = start;

    printf("\nBFS Traversal: ");

    while (front < rear)
    {
        int v = queue[front++];
        printf("%s ", name[v]);

        if (v == target)
            found = 1;

        for (int i = 0; i < n; i++)
        {
            if (graph[v][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }

    if (found)
        printf("\nFile found using BFS.\n");
    else
        printf("\nFile not found using BFS.\n");
}

int dfsFound;

void DFS(int v)
{
    visited[v] = 1;
    printf("%s ", name[v]);

    if (v == target)
        dfsFound = 1;

    for (int i = 0; i < n; i++)
    {
        if (graph[v][i] == 1 && !visited[i])
            DFS(i);
    }
}

int main()
{
    int start;
    char targetName[30];

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter node names:\n");
    for (int i = 0; i < n; i++)
        scanf("%29s", name[i]);

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    printf("Enter starting node index (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("Enter file name to search: ");
    scanf("%29s", targetName);

    target = -1;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(name[i], targetName) == 0)
            target = i;
    }

    if (target == -1)
    {
        printf("File name does not exist in the graph.\n");
        return 0;
    }

    BFS(start);

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    dfsFound = 0;
    printf("\nDFS Traversal: ");
    DFS(start);

    if (dfsFound)
        printf("\nFile found using DFS.\n");
    else
        printf("\nFile not found using DFS.\n");

    return 0;
}
