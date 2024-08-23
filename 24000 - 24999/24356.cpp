#include <iostream>
using namespace std;

int main()
{
    int t1, m1, t2, m2, res;

    cin >> t1 >> m1 >> t2 >> m2;

    m1 += t1 * 60;
    m2 += t2 * 60;

    if (m1 > m2)
        m2 += 24 * 60;

    res = m2 - m1;

    cout << res << " " << res / 30 << '\n';

    return 0;
}