#include <iostream>
using namespace std;

int main() 
{
	int N, sum1 = 0, sum2 = 0;
	char s;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s;

		if (s == 'D')
			sum1++;
		else
			sum2++;

		if (sum1 - sum2 >= 2 || sum2 - sum1 >= 2)
			break;
	}

	cout << sum1 << ":" << sum2 << '\n';

    return 0;
}