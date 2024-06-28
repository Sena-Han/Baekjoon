#include <iostream>
using namespace std;

int main()
{
    bool b = false;
    int n[9], sum = 0, tmp;

    for (int i = 0; i < 9; i++)
    {
        cin >> n[i];
        sum += n[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == i)
                continue;

            tmp = sum - n[i] - n[j];

            if (tmp == 100)
            {
                n[i] = 100;
                n[j] = 100;

                b = true;
                break;
            }
        }

        if (b == true)
            break;
    }

    for (int i = 0; i < 9; i++)
    {
        if (n[i] < 100)
            cout << n[i] << '\n';
    }

    return 0;
}