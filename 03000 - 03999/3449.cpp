#include <iostream>
using namespace std;

int main()
{
	int T;
	string a, b;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;

		int cnt = 0;

		for (int j = 0; j < a.length(); j++)
		{
			if (a[j] != b[j])
				cnt++;
		}

		cout << "Hamming distance is " << cnt << ".\n";
	}

	return 0;
}