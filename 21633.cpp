#include <iostream>
using namespace std;

int main()
{
    double k, sum;

    cin >> k;

    sum = 25.0 + k * 0.01;

    if (sum <= 100)
        printf("100.00\n");
    else if (sum >= 2000)
        printf("2000.00\n");
    else
        printf("%.2f\n", sum);

    return 0;
}