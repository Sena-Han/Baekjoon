#include <iostream>
using namespace std;

int main()
{
    float t, tmp;

    cin >> t;

    while (1)
    {
        tmp = t;

        cin >> t;

        if (t == 999)
            break;

        printf("%.2f\n", t - tmp);
    }

    return 0;
}