#include <iostream>
using namespace std;

int main()
{
	int N, sum = 0;
	string s;

	cin >> N >> s;

	for (int i = 0; i < N; i++)
		sum += (int)s[i] - 64;

	cout << sum << endl;

	return 0;
}