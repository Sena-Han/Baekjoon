#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 9

int N, M;
int num[MAX];
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
		visited[i] = true;
		arr[cnt] = num[i - 1];

		dfs(cnt + 1);

		visited[i] = false;
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> num[i];

	sort(num, num + N);

	dfs(0);

	return 0;
}