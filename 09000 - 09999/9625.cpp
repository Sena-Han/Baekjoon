#include <iostream>
using namespace std;

int main() 
{
    int k, a[45], b[45];

    cin >> k;

    a[0] = 0;
    a[1] = 1;
    b[0] = 1;
    b[1] = 1;

    for (int i = 2; i < k; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    cout << a[k - 1] << " " << b[k - 1] << '\n';

    return 0;
}