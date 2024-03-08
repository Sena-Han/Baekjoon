#include <iostream>
using namespace std;

int main()
{
    int N, a[11];

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        bool b = true;

        for (int j = 1; j <= 10; j++)
            cin >> a[j];

        for (int j = 1; j <= 10; j++)
        {
            if (a[j] != ((j - 1) % 5) + 1)
            {
                b = false;
                break;
            }
        }

        if (b == true)
            cout << i << '\n';
    }

    return 0;
}