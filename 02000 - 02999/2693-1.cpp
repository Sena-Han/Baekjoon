#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T, A[10];

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 10; j++)
            cin >> A[j];

        sort(A, A + 10, greater<int>());

        cout << A[2] << '\n';
    }

    return 0;
}