#include <iostream>
using namespace std;

int main()
{
    int x1, y1, x2, y2, sum = 0;
    int xy[100][100] = { 0 };

    for (int i = 0; i < 4; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j < x2; j++)
        {
            for (int k = y1; k < y2; k++)
            {
                if (xy[j][k] == 0)
                {
                    xy[j][k] = 1;
                    sum++;
                }
            }
        }
    }

    cout << sum << '\n';

    return 0;
}