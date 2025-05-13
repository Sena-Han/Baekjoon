#include <iostream>
using namespace std;

int main()
{
    int X, cnt = 1;

    cin >> X;

    while (X > cnt)
    {
        X -= cnt;
        cnt++;
    }

    if (cnt % 2 == 0)
        cout << X << '/' << cnt - X + 1 << '\n';
    else
        cout << cnt - X + 1 << '/' << X << '\n';

    return 0;
}