#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int cnt = 0;

    cin >> s;

    stack<char> stack;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            stack.push(s[i]);
        else
        {
            if (stack.empty())
                cnt++;
            else
                stack.pop();
        }
    }

    cnt += stack.size();

    cout << cnt << '\n';

    return 0;
}