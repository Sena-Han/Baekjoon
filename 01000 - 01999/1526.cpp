#include <iostream>
using namespace std;

int main()
{
    int N, res = 0;

    cin >> N;

    for (int i = 4; i <= N; i++)
    {
        int tmp = i;
        bool tf = true;

        while (tmp > 0)
        {
            if (tmp % 10 == 4 || tmp % 10 == 7)
            {
                tmp /= 10;
                continue;
            }
            else
            {
                tf = false;
                break;
            }
        }

        if (tf == true)
            res = i;
    }

    cout << res << '\n';

    return 0;
}