#include <iostream>
using namespace std;

int main()
{
    int t, n;
    char p1, p2;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        int p1w = 0, p2w = 0;

        for (int j = 0; j < n; j++)
        {
            cin >> p1 >> p2;

            if (p1 == 'R')
            {
                if (p2 == 'R')
                {
                    p1w++;
                    p2w++;
                }
                else if (p2 == 'P')
                    p2w++;
                else
                    p1w++;
            }
            else if (p1 == 'P')
            {
                if (p2 == 'R')
                    p1w++;
                else if (p2 == 'P')
                {
                    p1w++;
                    p2w++;
                }
                else
                    p2w++;
            }
            else
            {
                if (p2 == 'R')
                    p2w++;
                else if (p2 == 'P')
                    p1w++;
                else
                {
                    p1w++;
                    p2w++;
                }
            }
        }

        if (p1w > p2w)
            cout << "Player 1" << '\n';
        else if (p1w < p2w)
            cout << "Player 2" << '\n';
        else
            cout << "TIE" << '\n';
    }

    return 0;
}