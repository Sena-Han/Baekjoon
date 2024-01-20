#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double w, h, res;

    cin >> w >> h;

    res = (w + h) - sqrt((w * w) + (h * h));

    printf("%.9f\n", res);

    return 0;
}