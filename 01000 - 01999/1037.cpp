#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, A[50];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> A[i];

    sort(A, A + n);

    cout << A[0] * A[n - 1] << '\n';

    return 0;
}