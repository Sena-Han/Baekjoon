#include <iostream>
using namespace std;

int main()
{
    int N, F;

    cin >> N >> F;

    N -= (N % 100);

    while (1)
    {
        if (N % F == 0)
            break;

        N++;
    }

    if (N % 100 < 10)
        cout << 0;

    cout << N % 100 << '\n';

    return 0;
}