#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        bool b1 = false;

        for (int j = 1; j < i; j++)
        {
            int tmp = j, sum = j;

            while (tmp > 0)
            {
                sum += (tmp % 10);
                tmp /= 10;
            }

            if (sum == i)
            {
                b1 = true;
                break;
            }
        }

        if (b1 == false)
            printf("%d\n", i);
    }

    return 0;
}