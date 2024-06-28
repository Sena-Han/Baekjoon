#include <iostream>
using namespace std;

int main()
{
    int A, B, tmp, sum = 3;

    cin >> A >> B;

    A -= 2;
    B -= 1;

    tmp = min(A, B);
    sum += (tmp * 2);

    cout << sum << '\n';

    return 0;
}