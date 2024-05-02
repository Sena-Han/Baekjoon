#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, M;

    cin >> N;

    while (N--)
    {
        cin >> M;

        if (M == 300)
            cout << 1 << " ";
        else if (M >= 275)
            cout << 2 << " ";
        else if (M >= 250)
            cout << 3 << " ";
        else
            cout << 4 << " ";
    }

    return 0;
}