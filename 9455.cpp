#include <iostream>
using namespace std;

int main()
{
    int T, m, n;

    cin >> T;

    while (T--)
    {
        cin >> m >> n;

        int a[100][100], cnt = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[j][i] == 1)
                {
                    for (int k = j + 1; k < m; k++)
                    {
                        if (a[k][i] == 0)
                            cnt++;
                    }
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}