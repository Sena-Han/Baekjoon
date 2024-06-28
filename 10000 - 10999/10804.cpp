#include <iostream>
using namespace std;

int main()
{
    int n[21], a, b;

    for (int i = 1; i < 21; i++)
        n[i] = i;

    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;

        while (a < b)
        {
            int tmp = n[a];
            n[a++] = n[b];
            n[b--] = tmp;
        }
    }

    for (int i = 1; i < 21; i++)
        cout << n[i] << " ";

    return 0;
}