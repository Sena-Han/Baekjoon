#include <iostream>
using namespace std;

int main()
{
    int N;

    cin >> N;

    if (N <= 100000 && N % 2024 == 0)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';

    return 0;
}