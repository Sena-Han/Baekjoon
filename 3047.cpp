#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n[3];
    string s;

    cin >> n[0] >> n[1] >> n[2] >> s;

    sort(n, n + 3);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
            cout << n[0];
        else if (s[i] == 'B')
            cout << n[1];
        else
            cout << n[2];

        cout << " ";
    }

    return 0;
}