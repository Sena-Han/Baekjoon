#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < 5 * N; i++)
    {
        for (int j = 0; j < 5 * N; j++)
        {
            if (N <= i && i < N * 4 && N <= j && j < N * 4)
                cout << ' ';
            else
                cout << '@';
        }

        cout << '\n';
    }

    return 0;
}