#include <iostream>
using namespace std;

int main()
{
    string s, tmp = "CAMBRIDGE";

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < tmp.length(); j++)
        {
            if (s[i] == tmp[j])
                s[i] = 0;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 0)
            cout << s[i];
    }

    return 0;
}