#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, L;

	cin >> N >> L;

	int* a = new int[N];

	for (int i = 0; i < N; i++)
		cin >> a[i];

	sort(a, a + N);

	for (int i = 0; i < N; i++)
	{
		if (a[i] <= L)
			L++;
	}

	cout << L << endl;

	return 0;
}