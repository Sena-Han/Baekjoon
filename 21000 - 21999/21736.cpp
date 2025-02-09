#include <iostream>
#include <queue>
using namespace std;

const int MAX = 601;

int n, m, cnt = 0;
char arr[MAX][MAX];
bool visited[MAX][MAX];

queue<pair<int, int>> q;
pair<int, int> p;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

void BFS()
{
    q.push(p);
    visited[p.first][p.second] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (arr[nx][ny] == 'X' || visited[nx][ny])
                continue;

            if (arr[nx][ny] == 'P')
                cnt++;

            q.push(make_pair(nx, ny));
            visited[nx][ny] = 1;
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 'I')
            {
                p.first = i;
                p.second = j;
            }
        }
    }

    BFS();

    if (cnt)
        cout << cnt << '\n';
    else
        cout << "TT" << '\n';

    return 0;
}