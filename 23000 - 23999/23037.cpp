#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sum = 0;
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
        sum += pow(s[i] - '0', 5);

    cout << sum << '\n';

    return 0;
}