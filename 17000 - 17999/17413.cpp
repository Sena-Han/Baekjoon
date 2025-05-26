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
            tag = true;

            if (!st.empty())
                stackPop();
        }
        else if (s[i] == '>')
        {
            res += s[i];
            tag = false;

            continue;
        }
        else if (s[i] == ' ')
        {
            if (!st.empty())
                stackPop();

            res += ' ';

            continue;
        }

        if (tag)
            res += s[i];
        else
            st.push(s[i]);
    }

    if (!st.empty())
        stackPop();

    cout << res << '\n';

    return 0;
}