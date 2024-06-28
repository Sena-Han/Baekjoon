#include <iostream>
using namespace std;

int main()
{
    int T, n;

    cin >> T;

    while (T--)
    {
        cin >> n;

        int cnt = 0;

        while (n > 0)
        {
            if (n % 2 == 1)
                cout << cnt << " ";

            n /= 2;
            cnt++;
        }
    }

    return 0;
}