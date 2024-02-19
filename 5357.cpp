#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;

    while (n--)
    {
        char tmp = ' ';

        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (tmp != s[i])
            {
                cout << s[i];
                tmp = s[i];
            }
        }

        cout << '\n';
    }

    return 0;
}