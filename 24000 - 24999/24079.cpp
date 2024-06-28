#include <iostream>
using namespace std;

int main()
{
	double x, y, z;

	cin >> x >> y >> z;

	if (x + y <= z + 0.5)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';

	return 0;
}