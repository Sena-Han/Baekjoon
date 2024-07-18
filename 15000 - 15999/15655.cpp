#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 9

int N, M;
int num[MAX];
int arr[MAX];
bool visited[MAX];

void dfs(int cnt, int n)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << " ";

		cout << '\n';

		return;
	}

	for (int i = n; i <= N; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = num[i - 1];

			dfs(cnt + 1, i + 1);

			visited[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> num[i];

	sort(num, num + N);

	dfs(0, 1);

	return 0;
}