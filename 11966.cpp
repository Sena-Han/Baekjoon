#include <iostream>
using namespace std;

int main()
{
    int N, sum = 1;

    cin >> N;

    if (N == 1)
    {
        cout << 1 << '\n';
        return 0;
    }

    while (sum < N)
        sum *= 2;

    if (sum == N)
        cout << 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}