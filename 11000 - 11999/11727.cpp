#include <iostream>
using namespace std;

int dp[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    dp[1] = 1;
    dp[2] = 3;

    int sum = dp[1] + dp[2];

    for (int i = 3; i <= n; i++)
    {
        dp[i] = sum % 10007;

        if (i % 2 == 0)
            dp[i] += 2;
        else
            dp[i]++;

        sum += dp[i];
    }

    cout << dp[n] << '\n';

    return 0;
}