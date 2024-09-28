#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string s;

        getline(cin, s);

        if (!s.empty() && s.back() != '.')
            s += '.';

        cout << s << '\n';
    }

    return 0;
}