#include <iostream>
using namespace std;

int main()
{
	long double N;

	cin >> N;

	cout << fixed;
	cout.precision(2);
	cout << N / 4 << '\n';

	return 0;
}