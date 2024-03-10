#include <iostream>
using namespace std;

int main()
{
    int N, K = 1, cnt = 0;

    cin >> N;

    while (N > 0)
    {
        if (N < K)
            K = 1;

        N -= K;

        K++;
        cnt++;
    }

    cout << cnt << '\n';

    return 0;
}