#include <iostream>
using namespace std;

int main()
{
    int T, N, C;
    float G;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;

        int credit = 0;
        float gpa = 0;

        for (int j = 0; j < N; j++)
        {
            cin >> C >> G;

            credit += C;
            gpa += (G * C);
        }

        printf("%d %.1f\n", credit, gpa / credit);
    }

    return 0;
}