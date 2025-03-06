#include <iostream>
using namespace std;

#define MAX 101

long long dp[MAX];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T, n;

    cin >> T;

    dp[1] = dp[2] = dp[3] = 1;

    for (int i = 3; i < MAX; i++)
        dp[i] = dp[i - 2] + dp[i - 3];

    while (T--)
    {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}