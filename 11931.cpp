#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int N;

    cin >> N;

    int* a = new int[N];

    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a, a + N, compare);

    for (int i = 0; i < N; i++)
        cout << a[i] << '\n';

    return 0;
}