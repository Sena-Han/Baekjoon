#include <iostream>
using namespace std;

int main() 
{
    double A1, P1, R1, P2, sum1, sum2;

    cin >> A1 >> P1 >> R1 >> P2;

    sum1 = A1 * P2;
    sum2 = R1 * R1 * 3.1415926535 * P1;

    if (sum1 > sum2)
        cout << "Slice of pizza" << '\n';
    else
        cout << "Whole pizza" << '\n';

    return 0;
}