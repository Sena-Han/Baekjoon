#include <iostream>
using namespace std;

long long arr[35];

int main()
{
	int n;
	
	cin >> n;

	arr[0] = 1;

	for (int i = 1; i < n + 1; i++)
	{
		for (int j = 0; j < i; j++)
			arr[i] += arr[j] * arr[i - j - 1];
	}

	cout << arr[n] << '\n';

	return 0;
}