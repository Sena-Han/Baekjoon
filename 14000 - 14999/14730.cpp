#include <iostream>
using namespace std;

int main()
{
    int N, C, K, sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> C >> K;
        sum += C * K;
    }

    cout << sum << '\n';

    return 0;
}