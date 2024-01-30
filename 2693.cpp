#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int T, A[10];

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 10; j++)
            cin >> A[j];

        sort(A, A + 10, compare);

        cout << A[2] << '\n';
    }

    return 0;
}