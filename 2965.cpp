#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n[3];

    cin >> n[0] >> n[1] >> n[2];

    sort(n, n + 3);
    cout << max(n[2] - n[1], n[1] - n[0]) - 1 << '\n';

    return 0;
}