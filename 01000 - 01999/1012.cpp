#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

const int MAX = 51;

int M, N, K, cnt;
int arr[MAX][MAX];
int visited[MAX][MAX];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

queue <pair<int, int>> q;

void reset()
{
	cnt = 0;

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

		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < M && ny >= 0 && ny < N && !visited[nx][ny])
			{
				if (arr[nx][ny] == 1)
				{
					q.push({ nx, ny });
					visited[nx][ny] = 1;
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;

	cin >> T;

	while (T--)
	{
		cin >> M >> N >> K;

		for (int i = 0; i < K; i++)
		{
			int X, Y;

			cin >> X >> Y;

			arr[X][Y] = 1;
		}

		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (arr[i][j] == 1 && !visited[i][j])
				{
					BFS(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << '\n';

		reset();
	}

	return 0;
}