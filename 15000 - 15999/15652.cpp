#include <iostream>
using namespace std;

#define MAX 9

int N, M;
int arr[MAX];
bool visited[MAX];

void dfs(int cnt, int num)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";

		cout << '\n';

		return;
	}

	for (int i = num; i <= N; i++)
	{
		visited[i] = true;
		arr[cnt] = i;

		dfs(cnt + 1, i);

		visited[i] = false;
	}
}

int main()
{
	cin >> N >> M;

	dfs(0, 1);

	return 0;
}