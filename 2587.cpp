#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N[5], sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> N[i];
		sum += N[i];
	}

	sort(N, N + 5);

	cout << sum / 5 << endl << N[2] << endl;

	return 0;
}