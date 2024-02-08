#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string s;

    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++)
    {
        getline(cin, s);

        if ((int)s[0] >= 97)
            s[0] -= 32;

        cout << s << '\n';
    }

    return 0;
}