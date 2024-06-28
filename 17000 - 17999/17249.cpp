#include <iostream>
using namespace std;

int main()
{
    int l = 0, r = 0;
    string s;

    cin >> s;

    int i = 0;

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            break;

        if (s[i] == '@')
            l++;
    }

    for (i; i < s.length(); i++)
    {
        if (s[i] == '@')
            r++;
    }

    cout << l << " " << r << '\n';

    return 0;
}