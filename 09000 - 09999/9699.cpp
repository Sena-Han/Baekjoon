#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;

    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int sum = 0;

        for (int j = 0, x; j < 5; j++)
        {
            cin >> x;
            sum = max(sum, x);
        }

        printf("Case #%d: %d\n", i, sum);
    }

    return 0;
}