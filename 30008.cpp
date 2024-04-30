#include <iostream>
using namespace std;

int main()
{
    int N, K, G;

    cin >> N >> K;

    while (K--)
    {
        cin >> G;

        int tmp = (G * 100) / N;

        if (tmp <= 4)
            cout << 1 << '\n';
        else if (tmp <= 11)
            cout << 2 << '\n';
        else if (tmp <= 23)
            cout << 3 << '\n';
        else if (tmp <= 40)
            cout << 4 << '\n';
        else if (tmp <= 60)
            cout << 5 << '\n';
        else if (tmp <= 77)
            cout << 6 << '\n';
        else if (tmp <= 89)
            cout << 7 << '\n';
        else if (tmp <= 96)
            cout << 8 << '\n';
        else
            cout << 9 << '\n';
    }

    return 0;
}