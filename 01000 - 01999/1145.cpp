#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n[5], cnt = 0;

    for (int i = 0; i < 5; i++)
        cin >> n[i];

    sort(n, n + 5);

    int tmp = n[0];

    while (cnt < 3)
    {
        cnt = 0;
        tmp++;

        for (int i = 0; i < 5; i++)
        {
            if (tmp % n[i] == 0)
                cnt++;
        }
    }

    cout << tmp << '\n';

    return 0;
}