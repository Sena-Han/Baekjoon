#include <iostream>
using namespace std;

int main()
{
    int N, a, b, sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;

        if (a == 136)
            sum += 1000;
        else if (a == 142)
            sum += 5000;
        else if (a == 148)
            sum += 10000;
        else if (a == 154)
            sum += 50000;
    }

    cout << sum << '\n';

    return 0;
}