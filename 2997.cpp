#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3], tmp1, tmp2;

    for (int i = 0; i < 3; i++)
        cin >> a[i];

    sort(a, a + 3);

    tmp1 = a[1] - a[0];
    tmp2 = a[2] - a[1];

    if (tmp2 < tmp1)
        cout << a[0] + tmp2 << '\n';
    else if (tmp2 == tmp1)
        cout << a[2] + tmp1 << '\n';
    else
        cout << a[1] + tmp1 << '\n';

    return 0;
}