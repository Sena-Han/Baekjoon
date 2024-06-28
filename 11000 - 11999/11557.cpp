#include <iostream>
using namespace std;

int main()
{
    int T, N, L, max = 0;
    string S, res;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;

        for (int j = 0; j < N; j++)
        {
            cin >> S >> L;

            if (L > max)
            {
                max = L;
                res = S;
            }
        }

        cout << res << '\n';
    }

    return 0;
}