#include <iostream>
#include <queue>
using namespace std;

const int MAX = 501;

int N, M, X, Y;
int arr[MAX][MAX];
int visited[MAX][MAX];

int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };

queue<pair<int, int>> q;

void BFS(int a, int b)
{
    q.push({ a, b });
    visited[a][b] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx > 0 && nx <= N && ny > 0 && ny <= N && !visited[nx][ny])
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

    cin >> N >> M >> X >> Y;

    BFS(X, Y);

    for (int i = 0; i < M; i++)
    {
        int A, B;

        cin >> A >> B;

        cout << arr[A][B] << " ";
    }

    return 0;
}