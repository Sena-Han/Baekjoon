#include <iostream>
using namespace std;

int main()
{
	int n, m, ans = 0;
	char c[101][101];

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> c[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char tmp;

			cin >> tmp;

			if (c[i][j] == tmp)
				ans++;
		}
	}

	cout << ans << '\n';

	return 0;
}