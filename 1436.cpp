#include <iostream>
using namespace std;

int main()
{
	int N, sum = 666, count = 0;

	cin >> N;

	while (count != N - 1)
	{
		sum++;

		int tmp = sum;

		while (tmp != 0)
		{
			if (tmp % 1000 == 666)
			{
				count++;
				break;
			}

			tmp /= 10;
		}
	}

	cout << sum << endl;

	return 0;
}