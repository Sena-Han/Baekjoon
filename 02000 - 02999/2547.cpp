#include <iostream>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        long long s, c, sum = 0;

        cin >> s;

        for (int i = 0; i < s; i++)
        {
            cin >> c;

            sum = (sum + c) % s;
        }

        if (sum % s)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}