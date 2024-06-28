#include <iostream>
using namespace std;

int main()
{
    double K, D1, D2, tmp;

    cin >> K >> D1 >> D2;

    if (D1 == D2)
        cout << K * K << '\n';
    else
    {
        tmp = (D1 - D2) / 2;
        cout << (K * K) - (tmp * tmp) << '\n';
    }

    return 0;
}