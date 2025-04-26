#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isMismatch(char c, char top)
{
	return (c == ')' && top == '[') || (c == ']' && top == '(');
}

int main()
{
	string s;

	while (1)
	{
		getline(cin, s);

		stack<char> stack;

		bool tf = true;

		if (s == ".")
			break;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '(' || s[i] == '[')
				stack.push(s[i]);

			if (s[i] == ')' || s[i] == ']')
			{
				if (stack.empty() || isMismatch(s[i], stack.top()))
				{
					tf = false;
					break;
				}

				stack.pop();
			}
		}

		if (tf && stack.empty())
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}

	return 0;
}