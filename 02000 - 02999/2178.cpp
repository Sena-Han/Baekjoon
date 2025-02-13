#include <iostream>
#include <queue>
using namespace std;

const int MAX = 101;

int n, m;
int arr[MAX][MAX];

queue<pair<int, int>> q;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

void BFS(int x, int y)
{
    q.push(make_pair(x, y));

    while (!q.empty())
    {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = a + dx[i];
            int ny = b + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (arr[nx][ny] == 1)
            {
                arr[nx][ny] = arr[a][b] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        for (int j = 0; j < m; j++)
            arr[i][j] = s[j] - '0';
    }

    BFS(0, 0);

    cout << arr[n - 1][m - 1] << '\n';

    return 0;
}