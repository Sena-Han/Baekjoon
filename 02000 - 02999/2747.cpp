#include <iostream>
using namespace std;

int main()
{
	int n, fibo[46] = { 0, 1, 1 };

	cin >> n;

	for (int i = 3; i <= n; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	cout << fibo[n] << '\n';

	return 0;
}