#include <iostream>
using namespace std;

#define MAX 9

int N, M;
int arr[MAX];
bool visited[MAX];

void dfs(int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";

		cout << '\n';

		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i;

			dfs(cnt + 1);

			visited[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;

	dfs(0);

	return 0;
}