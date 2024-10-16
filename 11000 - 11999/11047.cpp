#include <iostream>
using namespace std;

int arr[1000001];

int main()
{
	int N, K, res = 0;

	cin >> N >> K;

	for (int i = 1; i <= N; i++)
		cin >> arr[i];

	for (int i = N; i > 0; i--)
	{
		while (1)
		{
			if (K >= arr[i])
			{
				res++;
				K -= arr[i];
			}
			else
				break;
		}
	}

	cout << res << '\n';

	return 0;
}