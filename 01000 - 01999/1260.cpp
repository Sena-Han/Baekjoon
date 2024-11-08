#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

const int MAX = 1001;

int N, M, V;
int arr[MAX][MAX];
bool visited[MAX];
queue<int> q;

void reset()
{
    for (int i = 1; i <= N; i++)
        visited[i] = 0;
}

void DFS(int v)
{
    visited[v] = 1;
    cout << v << " ";

    for (int i = 1; i <= N; i++)
    {
        if (arr[v][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

void BFS(int v)
{
    q.push(v);
    visited[v] = 1;

    cout << v << " ";

    while (!q.empty())
    {
        v = q.front();
        q.pop();

        for (int i = 1; i <= N; i++)
        {
            if (arr[v][i] == 1 && visited[i] == 0)
            {
                q.push(i);
                visited[i] = 1;
                cout << i << " ";
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int a, b;

        cin >> a >> b;

        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    DFS(V);

    cout << '\n';

    reset();
    BFS(V);

    return 0;
}