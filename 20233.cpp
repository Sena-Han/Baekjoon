#include <iostream>
using namespace std;

int main()
{
    int a, x, b, y, T, sum1, sum2;

    cin >> a >> x >> b >> y >> T;

    if (T > 30)
        sum1 = a + ((T - 30) * x) * 21;
    else
        sum1 = a;

    if (T > 45)
        sum2 = b + ((T - 45) * y) * 21;
    else
        sum2 = b;

    cout << sum1 << " " << sum2 << '\n';

    return 0;
}