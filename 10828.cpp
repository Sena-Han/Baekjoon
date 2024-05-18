#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    string s;

    stack<int> stack;

    cin >> N;

    while (N--)
    {
        cin >> s;

        if (s == "push")
        {
            int X;

            cin >> X;
            stack.push(X);
        }
        else if (s == "pop")
        {
            if (!stack.empty())
            {
                cout << stack.top() << '\n';
                stack.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (s == "size")
        {
            cout << stack.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << stack.empty() << '\n';
        }
        else if (s == "top")
        {
            if (!stack.empty())
                cout << stack.top() << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}