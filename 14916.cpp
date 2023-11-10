#include <iostream>
using namespace std;

int main()
{
	int n, cnt = 0;

	cin >> n;

	if (n < 2)
	{
		cout << -1 << endl;
		return 0;
	}

	if (n >= 5)
	{
		cnt = n / 5;
		n %= 5;

		while (true)
		{
			if (n % 2 != 0)
			{
				cnt--;
				n += 5;
			}
			else
				break;
		}
	}

	if (n >= 2)
	{
		if (n % 2 != 0)
		{
			cout << -1 << endl;
			return 0;
		}

		cnt += (n / 2);
		n %= 2;
	}
	
	cout << cnt << endl;

	return 0;
}