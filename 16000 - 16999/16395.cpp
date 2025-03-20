#include <iostream>
using namespace std;

#define MAX 31

int dp[MAX][MAX];

int main()
{
    int n, k;

    cin >> n >> k;

    for (int i = 0; i < MAX; i++)
        dp[i][0] = 1;

    for (int i = 1; i < MAX; i++)
    {
        for (int j = 1; j <= i; j++)
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }

    cout << dp[n - 1][k - 1] << '\n';

    return 0;
}