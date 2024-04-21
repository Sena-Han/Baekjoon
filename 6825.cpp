#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double w, h;

    cin >> w >> h;

    if (w / pow(h, 2) > 25)
        cout << "Overweight" << '\n';
    else if (w / pow(h, 2) > 18.5)
        cout << "Normal weight" << '\n';
    else
        cout << "Underweight" << '\n';

    return 0;
}