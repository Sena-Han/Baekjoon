#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	while (1)
	{
		getline(cin, s);

		if (cin.eof())
			break;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'e')
				cout << 'i';
			else if (s[i] == 'i')
				cout << 'e';
			else if (s[i] == 'E')
				cout << 'I';
			else if (s[i] == 'I')
				cout << 'E';
			else
				cout << s[i];
		}

		cout << '\n';
	}

	return 0;
}