#include <iostream>
using namespace std;

#define MAX 1001

int dp[MAX];
int price[MAX];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> price[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            dp[i] = max(dp[i], dp[i - j] + price[j]);
    }

    cout << dp[n] << '\n';

    return 0;
}