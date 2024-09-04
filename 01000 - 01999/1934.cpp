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
    int T, A, B, ans;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;

        ans = (A * B) / (gcd(A, B));
        cout << ans << '\n';
    }

    return 0;
}