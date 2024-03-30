#include <iostream>
using namespace std;

int main()
{
	int T;
	string S;

	cin >> T;

	while (T--)
	{
		cin >> S;

		int a[26] = { 0 }, sum = 0;

		for (int j = 0; j < S.length(); j++)
			a[S[j] - 65]++;

		for (int j = 0; j < 26; j++)
		{
			if (a[j] == 0)
				sum += (j + 65);
		}

		cout << sum << '\n';
	}

	return 0;
}