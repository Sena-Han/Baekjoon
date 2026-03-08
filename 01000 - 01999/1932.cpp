#include <iostream>
#include <algorithm>
using namespace std;

int dp[501][501];

int main()
{
    int n, res;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
            cin >> dp[i][j];
    }

    res = dp[1][0];

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j == 0)
                dp[i][j] += dp[i - 1][0];
            else if (j == i - 1)
                dp[i][j] += dp[i - 1][j - 1];
            else
                dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);

            res = max(res, dp[i][j]);
        }
    }

    cout << res << '\n';

    return 0;
}