#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 10;
    string n;

    cin >> n;

    for (int i = 1; i < n.length(); i++)
    {
        if (n[i - 1] != n[i])
            sum += 10;
        else
            sum += 5;
    }

    cout << sum << '\n';

    return 0;
}