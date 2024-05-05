#include <iostream>
using namespace std;

int main()
{
    int P, N;
    double D, A, B, F, res;

    cin >> P;

    while (P--)
    {
        cin >> N >> D >> A >> B >> F;

        res = D / (A + B);
        printf("%d %f\n", N, F * res);
    }

    return 0;
}