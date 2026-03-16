#include <iostream>
#include <set>
using namespace std;

set<string> s;

int main()
{
	int N;
	char c;

	cin >> N >> c;

	for (int i = 0; i < N; i++)
	{
		string str;

		cin >> str;
		s.insert(str);
	}

	if (c == 'Y')
		cout << s.size() << '\n';
	else if (c == 'F')
		cout << s.size() / 2 << '\n';
	else
		cout << s.size() / 3 << '\n';

	return 0;
}