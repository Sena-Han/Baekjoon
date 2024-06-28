#include <iostream>
using namespace std;

int main()
{
    int N, A[1000], B, sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 0; i < N; i++)
    {
        cin >> B;

        if (B >= A[i])
            sum++;
    }

    cout << sum << '\n';

    return 0;
}