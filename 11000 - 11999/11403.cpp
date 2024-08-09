#include <iostream>
using namespace std;

int g[100][100];

int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cin >> g[i][j];
	}

	for (int k = 0; k < N; k++)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (g[i][k] && g[k][j])
					g[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			cout << g[i][j] << " ";

		cout << '\n';
	}

	return 0;
}