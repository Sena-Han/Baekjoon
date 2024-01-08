#include <iostream>
using namespace std;

int main()
{
    int n, x, y, sum = 0;
    int p[100][100] = { 0 };

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        for (int i = x; i < x + 10; i++)
        {
            for (int j = y; j < y + 10; j++)
            {
                if (p[i][j] == 0)
                {
                    p[i][j] = 1;
                    sum++;
                }
            }
        }
    }

    cout << sum << '\n';

    return 0;
}