#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    vector<bool> primeNum(m + 1, true);

    primeNum[0] = primeNum[1] = false;

    for (int i = 2; i <= m; i++)
    {
        if (primeNum[i])
        {
            for (int j = i * 2; j <= m; j += i)
                primeNum[j] = false;
        }
    }

    for (int i = n; i <= m; i++)
    {
        if (primeNum[i])
            cout << i << '\n';
    }

    return 0;
}