#include <iostream>
using namespace std;

int main()
{
    int A, P, axel, petra;

    cin >> A >> P;

    axel = A * 7;
    petra = P * 13;

    if (axel > petra)
        cout << "Axel" << '\n';
    else if (axel < petra)
        cout << "Petra" << '\n';
    else
        cout << "lika" << '\n';

    return 0;
}