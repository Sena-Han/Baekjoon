#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int cntJ = 0, cntI = 0;

    cin >> s;

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'O')
        {
            if (s[i + 1] == 'I')
            {
                if (s[i - 1] == 'J')
                    cntJ++;

                if (s[i - 1] == 'I')
                    cntI++;
            }
        }
    }

    cout << cntJ << '\n' << cntI << '\n';

    return 0;
}