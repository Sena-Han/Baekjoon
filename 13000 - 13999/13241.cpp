#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main()
{
    long long A, B, ans;

    cin >> A >> B;

    ans = (A * B) / (gcd(A, B));

    cout << ans << '\n';

    return 0;
}