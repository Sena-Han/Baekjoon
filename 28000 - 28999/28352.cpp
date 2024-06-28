#include <iostream>
using namespace std;

int main() 
{
    long long N, sum = 1, tmp;

    cin >> N;

    for (int i = 1; i <= N; i++)
        sum *= i;

    tmp = 7 * 24 * 60 * 60;

    cout << sum / tmp << '\n';

    return 0;
}