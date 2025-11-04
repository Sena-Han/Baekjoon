#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

const int MAX = 301;

int T, l;
int startX, startY, endX, endY;
int arr[MAX][MAX];
int visited[MAX][MAX];

int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

queue <pair<int, int>> q;

void reset()
{
    while (!q.empty()) 
        q.pop();

    memset(arr, 0, sizeof(arr));
    memset(visited, 0, sizeof(visited));
}

void BFS(int a, int b)
{
    q.push({ a, b });
    visited[a][b] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == endX && y == endY)
        {
            cout << arr[x][y] << '\n';
            break;
        }

        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < l && ny >= 0 && ny < l && !visited[nx][ny])
            {
                q.push({ nx, ny });
                visited[nx][ny] = 1;
                arr[nx][ny] = arr[x][y] + 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> l;
        cin >> startX >> startY >> endX >> endY;

        BFS(startX, startY);

        reset();
    }

    return 0;
}