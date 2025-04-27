#include <iostream>
using namespace std;

int main()
{
	int p, c;

	cin >> p >> c;

	if (p > c)
		cout << (p * 50) - (c * 10) + 500 << '\n';
	else
		cout << (p * 50) - (c * 10) << '\n';

	return 0;
}