#include <iostream>
using namespace std;

int main()
{
    int C, N;

    cin >> C;

    for (int i = 0; i < C; i++)
    {
        cin >> N;

        int sum = 0, cnt = 0;
        int* a = new int[N];

        for (int j = 0; j < N; j++)
        {
            cin >> a[j];
            sum += a[j];
        }

        sum /= N;

        for (int j = 0; j < N; j++)
        {
            if (a[j] > sum)
                cnt++;
        }

        printf("%.3f%%\n", (100.0 / N) * cnt);
    }

    return 0;
}