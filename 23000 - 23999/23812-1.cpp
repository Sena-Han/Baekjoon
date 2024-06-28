#include <iostream>
using namespace std;

void gapO(int n)
{
    for (int j = 0; j < n; j++)
        cout << "@";

    for (int j = 0; j < n * 3; j++)
        cout << " ";

    for (int j = 0; j < n; j++)
        cout << "@";

    cout << '\n';
}

void gapX(int n)
{
    for (int j = 0; j < n * 5; j++)
        cout << "@";

    cout << '\n';
}

int main()
{
    int N;

    cin >> N;

    for (int i = 0; i < N * 5; i++)
    {
        if (i < N)
        {
            gapO(N);
        }
        else if (i < N * 2)
        {
            gapX(N);
        }
        else if (i < N * 3)
        {
            gapO(N);
        }
        else if (i < N * 4)
        {
            gapX(N);
        }
        else
        {
            gapO(N);
        }
    }

    return 0;
}