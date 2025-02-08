#include <iostream>
using namespace std;

int a[101][101], b[101][101], res[101][101];

void Input(int a, int b, int arr[][101])
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cin >> arr[i][j];
    }
}

int main() 
{
    int n, m, k;

    cin >> n >> m;
    Input(n, m, a);

    cin >> m >> k;
    Input(m, k, b);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            for (int k = 0; k < m; k++)
                res[i][j] += a[i][k] * b[k][j];

            cout << res[i][j] << " ";
        }

        cout << '\n';
    }

    return 0;
}