#include <iostream>
using namespace std;

int main()
{
    int N, a[200][3], res[200] = { 0 };

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bool TF = false;

            for (int k = 0; k < N; k++)
            {
                if (a[i][j] == a[k][j] && i != k)
                    TF = true;
            }

            if (TF == false)
                res[i] += a[i][j];
        }

        cout << res[i] << '\n';
    }

    return 0;
}