#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    int res = (n + m - 1) / m;
    cout << res << '\n';

    return 0;
}