#include <iostream>
using namespace std;

int main()
{
    int T, N, M;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;

        int sum = 0;

        for (int j = N; j <= M; j++)
        {
            if (j == 0)
                sum++;

            int tmp = j;

            while (tmp > 0)
            {
                if (tmp % 10 == 0)
                    sum++;

                tmp /= 10;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}