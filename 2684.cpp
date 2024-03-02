#include <iostream>
using namespace std;

int main()
{
    int P;
    string s;

    cin >> P;

    for (int i = 0; i < P; i++)
    {
        cin >> s;

        int res[8] = { 0 };

        for (int j = 0; j < s.length() - 2; j++)
        {

            if (s[j] == 'T')
            {
                if (s[j + 1] == 'T')
                {
                    if (s[j + 2] == 'T')
                        res[0]++;
                    else
                        res[1]++;
                }
                else if (s[j + 1] == 'H')
                {
                    if (s[j + 2] == 'T')
                        res[2]++;
                    else
                        res[3]++;
                }
            }
            else if (s[j] == 'H')
            {
                if (s[j + 1] == 'T')
                {
                    if (s[j + 2] == 'T')
                        res[4]++;
                    else
                        res[5]++;
                }
                else if (s[j + 1] == 'H')
                {
                    if (s[j + 2] == 'T')
                        res[6]++;
                    else
                        res[7]++;
                }
            }
        }

        for (int j = 0; j < 8; j++)
            cout << res[j] << " ";

        cout << '\n';
    }

    return 0;
}