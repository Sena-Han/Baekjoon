#include <iostream>
using namespace std;

int main()
{
    int S, D, I, L, N, sum;

    cin >> S >> D >> I >> L >> N;

    sum = (N * 4) - (S + D + I + L);

    if (sum > 0)
        cout << sum << '\n';
    else
        cout << 0 << '\n';

    return 0;
}