#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int T;
    string s;

    cin >> T;

    while (T--)
    {
        cin >> s;

        stack<char> stack;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                stack.push(s[i]);
            else
            {
                if (!stack.empty())
                    stack.pop();
                else
                {
                    stack.push(s[i]);
                    break;
                }
            }
        }

        if (stack.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}