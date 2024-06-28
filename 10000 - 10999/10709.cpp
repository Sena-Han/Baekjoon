#include <iostream>
using namespace std;

char c[101][101];
int res[101][101];

int main()
{
    int H, W;

    cin >> H >> W;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
            cin >> c[i][j];
    }

    for (int i = 0; i < H; i++)
    {
        int tmp = -1;

        for (int j = 0; j < W; j++)
        {
            if (c[i][j] == 'c')
            {
                res[i][j] = 0;
                tmp = 0;
            }
            else
            {
                if (tmp != -1)
                    ++tmp;

                res[i][j] = tmp;
            }
        }
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
            cout << res[i][j] << " ";

        cout << '\n';
    }

    return 0;
}