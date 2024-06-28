#include <iostream>
using namespace std;

int main()
{
    int a, b;

    while (1)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;
        else
            printf("%d %d / %d\n", a / b, a % b, b);
    }

    return 0;
}