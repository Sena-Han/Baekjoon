#include <iostream>
#include <algorithm>
using namespace std;

int arr[301], res[301];

int main()
{
	int n;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	res[1] = arr[1];
	res[2] = arr[1] + arr[2];
	res[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= n; i++)
	{
		int a = res[i - 2] + arr[i];
		int b = res[i - 3] + arr[i - 1] + arr[i];

		res[i] = max(a, b);
	}

	cout << res[n] << '\n';

	return 0;
}