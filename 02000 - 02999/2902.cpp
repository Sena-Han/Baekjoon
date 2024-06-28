#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n, res;

    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        if (i == 0)
            res += n[i];

        if (n[i] == '-')
            res += n[i + 1];
    }

    cout << res << '\n';

    return 0;
}