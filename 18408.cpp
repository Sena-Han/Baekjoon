#include <iostream>
using namespace std;

int main()
{
	int A, B, C, n[3] = { 0 };

	cin >> A >> B >> C;

	n[A]++;
	n[B]++;
	n[C]++;

	if (n[1] > n[2])
		cout << 1 << endl;
	else
		cout << 2 << endl;

	return 0;
}