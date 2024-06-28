#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;

	cin >> N;
	cin.ignore();

	while (N--)
	{
		int tmp;
		string s, res;

		getline(cin, s);

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == ' ')
			{
				res = "god";
				tmp = i;

				break;
			}
		}

		for (int i = tmp + 1; i < s.length(); i++)
		{
			if (s[i] != ' ')
				res += s[i];
		}

		cout << res << '\n';
	}

	return 0;
}