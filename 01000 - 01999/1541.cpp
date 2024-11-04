#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    bool flag = false;

    string s, num;

    cin >> s;

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || i == s.length())
        {
            if (flag)
            {
                sum -= stoi(num);
                num = "";
            }
            else
            {
                sum += stoi(num);
                num = "";
            }
        }
        else
            num += s[i];

        if (s[i] == '-')
            flag = true;
    }

    cout << sum << '\n';

    return 0;
}