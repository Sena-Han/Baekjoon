#include <iostream>
using namespace std;

int main()
{
    int N, sum = 0;

    cin >> N;

    int tmp = N;

    while (true)
    {
        tmp = ((tmp % 10) * 10) + (((tmp / 10) + (tmp % 10)) % 10);

        sum++;

        if (tmp == N)
            break;
    }

    cout << sum << '\n';

    return 0;
}