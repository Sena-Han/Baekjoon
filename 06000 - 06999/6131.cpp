#include <iostream>
using namespace std;

int main()
{
    int N, cnt = 0;

    cin >> N;

    for (int i = 1; i <= 500; i++)
    {
        for (int j = 1; j <= 500; j++)
        {
            if (i * i == (j * j) + N)
                cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}