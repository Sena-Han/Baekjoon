#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, a[1000];

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a, a + N);

    cout << a[N - 1] - a[0] << '\n';

    return 0;
}