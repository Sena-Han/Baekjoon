#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    if ((A + B) % 12 != 0)
        cout << (A + B) % 12 << '\n';
    else
        cout << 12 << '\n';

    return 0;
}