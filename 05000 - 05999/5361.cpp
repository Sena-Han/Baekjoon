#include <iostream>
using namespace std;

int main()
{
    int T, A, B, C, D, E;
    float sum;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A >> B >> C >> D >> E;

        sum = (350.34 * A) + (230.90 * B) + (190.55 * C) + (125.30 * D) + (180.90 * E);

        printf("$%.2f\n", sum);
    }

    return 0;
}