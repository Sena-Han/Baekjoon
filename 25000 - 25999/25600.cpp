#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, a, d, g, score[1000] = { 0 };

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a >> d >> g;

        score[i] = a * (d + g);

        if (a == d + g)
            score[i] *= 2;
    }

    sort(score, score + N);

    cout << score[N - 1] << '\n';

    return 0;
}