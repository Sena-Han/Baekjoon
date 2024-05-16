#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, sum = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
        sum += pow(i, 3);

    cout << sum << '\n';

    return 0;
}