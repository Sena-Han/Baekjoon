#include <iostream>
using namespace std;

int main()
{
    int N, M, A, B, n[100001] = { 0 };

    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> A >> B;

        n[A]++;
        n[B]++;
    }

    for (int i = 1; i <= N; i++)
        cout << n[i] << '\n';

    return 0;
}