#include <iostream>
using namespace std;

int main()
{
    int T, d, n, s, p;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> d >> n >> s >> p;

        if (d + (n * p) > n * s)
            cout << "do not parallelize" << '\n';
        else if (d + (n * p) < n * s)
            cout << "parallelize" << '\n';
        else
            cout << "does not matter" << '\n';
    }

    return 0;
}