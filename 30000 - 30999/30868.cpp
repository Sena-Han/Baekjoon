#include <iostream>
using namespace std;

int main()
{
    int T, n;

    cin >> T;

    while (T--)
    {
        cin >> n;

        for (int i = 0; i < n / 5; i++)
            cout << "++++ ";

        for (int i = 0; i < n % 5; i++)
            cout << '|';

        cout << '\n';
    }

    return 0;
}