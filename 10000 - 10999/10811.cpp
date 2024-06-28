#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, n[101];

	cin >> N >> M;

	for (int i = 0; i <= N; i++)
		n[i] = i;

	int i, j;

	for (int k = 0; k < M; k++)
	{
		cin >> i >> j;
		reverse(n + i, n + j + 1);
	}

	for (int i = 1; i <= N; i++)
		cout << n[i] << " ";

	cout << endl;

	return 0;
}