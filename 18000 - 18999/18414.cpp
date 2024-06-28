#include <iostream>
using namespace std;

int main()
{
	int X, L, R;

	cin >> X >> L >> R;

	if (X <= L)
		cout << L << endl;
	else if (X >= R)
		cout << R << endl;
	else
		cout << X << endl;

	return 0;
}