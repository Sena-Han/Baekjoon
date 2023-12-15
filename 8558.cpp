#include <iostream>
using namespace std;

int main() 
{
    int n, result = 1;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        result *= i;
        result %= 10;
    }

    cout << result << '\n';

    return 0;
}