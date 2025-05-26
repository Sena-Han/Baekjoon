#include <iostream>
#include <string>
#include <stack>
using namespace std;

string res;
stack<char> st;

void stackPop()
{
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
}

int main()
{
    string s;
    bool tag = false;

    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '<')
        {
            stackPop();
            tag = true;
        }
        else if (s[i] == '>')
        {
            res += s[i];
            tag = false;

            continue;
        }
        else if (s[i] == ' ')
        {
            stackPop();
            res += ' ';

            continue;
        }

        if (tag)
            res += s[i];
        else
            st.push(s[i]);
    }

    stackPop();

    cout << res << '\n';

    return 0;
}
