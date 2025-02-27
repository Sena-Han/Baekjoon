#include <iostream>
#include <algorithm>
using namespace std;

double x[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    double res;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> x[i];

    sort(x, x + N);

    res = x[N - 1];

    for (int i = 0; i < N - 1; i++)
        res += x[i] / 2;

    cout << res << '\n';

    return 0;
}