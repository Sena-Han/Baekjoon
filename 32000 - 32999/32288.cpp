#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;

    cin >> n >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'I')
            cout << 'i';
        else if (s[i] == 'l')
            cout << 'L';
    }

    return 0;
}