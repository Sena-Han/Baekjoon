#include <iostream>
using namespace std;

int main()
{
    int R, C, res[5] = { 0 };
    string s[50];

    cin >> R >> C;

    for (int i = 0; i < R; i++)
        cin >> s[i];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i < R - 1 && j < C - 1)
            {
                int tmp = 0;

                if (s[i][j] == '#' || s[i + 1][j] == '#' || s[i][j + 1] == '#' || s[i + 1][j + 1] == '#')
                    continue;

                if (s[i][j] == 'X')
                    tmp++;

                if (s[i + 1][j] == 'X')
                    tmp++;

                if (s[i][j + 1] == 'X')
                    tmp++;

                if (s[i + 1][j + 1] == 'X')
                    tmp++;

                res[tmp]++;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        cout << res[i] << '\n';

    return 0;
}