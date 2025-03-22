#include <iostream>
using namespace std;

int main()
{
    int N, cnt = 99;

    cin >> N;

    if (N < 100)
    {
        cout << N << '\n';
        return 0;
    }

    for (int i = 100; i <= N; i++)
    {
        int hun = i / 100;
        int ten = (i / 10) % 10;
        int one = i % 10;

        if ((hun - ten) == (ten - one))
            cnt++;
    }

    cout << cnt << '\n';

    return 0;
}