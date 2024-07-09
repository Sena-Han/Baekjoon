#include <iostream>
#include <algorithm>
using namespace std;

int A[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, tmp;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> A[i];

    sort(A, A + N);

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> tmp;

        if (binary_search(A, A + N, tmp))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}