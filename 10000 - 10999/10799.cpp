#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    int cnt = 0;

    cin >> s;

    stack<char> stack;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            stack.push('(');
        }
        else
        {
            if (s[i - 1] == '(')
            {
                stack.pop();
                cnt += stack.size();
            }
            else
            {
                cnt++;
                stack.pop();
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}