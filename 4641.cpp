#include <iostream>
using namespace std;

int main()
{
    int n;

    while (1)
    {
        int cnt = 0, a[100] = { 0 };

        for (int i = 0; i < 16; i++)
        {
            cin >> n;

            if (n == -1)
                return 0;

            a[n] = 1;

            if (n == 0)
                break;
        }

        for (int j = 1; j < 50; j++)
        {
            if (a[j] == 1 && a[j * 2] == 1)
                cnt++;
        }

        printf("%d\n", cnt);
    }

    return 0;
}