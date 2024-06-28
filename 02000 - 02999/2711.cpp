#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T, n;
	string s;

	cin >> T;

	while (T--)
	{
		cin >> n >> s;

		s.erase(n - 1, 1);
		cout << s << '\n';
	}

	return 0;
}