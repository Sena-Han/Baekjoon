#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b);

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	int W[10], K[10], sumW = 0, sumK = 0;

	for (int i = 0; i < 10; i++)
		cin >> W[i];

	for (int i = 0; i < 10; i++)
		cin >> K[i];

	sort(W, W + 10, compare);
	sort(K, K + 10, compare);

	for (int i = 0; i < 3; i++)
	{
		sumW += W[i];
		sumK += K[i];
	}

	cout << sumW << " " << sumK << endl;

	return 0;
}