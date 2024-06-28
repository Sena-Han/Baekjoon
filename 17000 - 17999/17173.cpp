#include <iostream>
using namespace std;

int main()
{
    int N, M, K[1000], sum = 0;

    cin >> N >> M;

    for (int i = 0; i < M; i++)
        cin >> K[i];

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i % K[j] == 0)
            {
                sum += i;
                break;
            }
        }
    }

    cout << sum << '\n';

    return 0;
}