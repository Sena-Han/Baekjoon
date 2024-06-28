#include <iostream>
using namespace std;

int main()
{
    int N, T, sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> T;
        sum += T;
    }

    sum += ((N - 1) * 8);

    cout << sum / 24 << " " << sum % 24 << '\n';

    return 0;
}