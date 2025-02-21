#include <iostream>
using namespace std;

int fibo[41] = { 0, 1, };

int fibonacci(int n)
{
    if (n == 0 || n == 1)
        return fibo[n];
    else if (fibo[n] == 0)
        return fibo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    else
        return fibo[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T, n;

    cin >> T;

    while (T--)
    {
        cin >> n;

        if (n == 0)
            cout << "1 0" << '\n';
        else
            cout << fibonacci(n - 1) << " " << fibonacci(n) << '\n';
    }

    return 0;
}