#include <iostream>
#include <queue>
using namespace std;

const int MAX = 101;

int n, m, cnt = 0;
int arr[MAX][MAX];
bool visited[MAX];

void DFS(int a)
{
    visited[a] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (arr[a][i] == 1 && visited[i] == 0)
        {
            cnt++;
            DFS(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;

        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    DFS(1);

    cout << cnt << '\n';

    return 0;
}