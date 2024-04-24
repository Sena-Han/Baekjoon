#include <iostream>
using namespace std;

int main()
{
    int T, N;

    cin >> T;

    while (T--)
    {
        cin >> N;

        int tmp = N % 100;

        if ((N + 1) % tmp == 0)
            cout << "Good" << '\n';
        else
            cout << "Bye" << '\n';
    }

    return 0;
}