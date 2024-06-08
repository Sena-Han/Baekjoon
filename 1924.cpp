#include <iostream>
using namespace std;

int main()
{
    int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    int x, y, sum = 0;

    cin >> x >> y;

    for (int i = 0; i < x - 1; i++)
        sum += month[i];

    sum += y;

    cout << day[sum % 7] << '\n';

    return 0;
}