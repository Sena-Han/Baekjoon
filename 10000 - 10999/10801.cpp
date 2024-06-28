#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10], sumA = 0, sumB = 0;

    for (int i = 0; i < 10; i++)
        cin >> A[i];

    for (int i = 0; i < 10; i++)
        cin >> B[i];

    for (int i = 0; i < 10; i++)
    {
        if (A[i] > B[i])
            sumA++;
        else if (A[i] < B[i])
            sumB++;
    }

    if (sumA > sumB)
        cout << "A" << '\n';
    else if (sumA < sumB)
        cout << "B" << '\n';
    else if (sumA == sumB)
        cout << "D" << '\n';

    return 0;
}