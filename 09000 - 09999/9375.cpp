#include <iostream>
#include <map>
using namespace std;

int main()
{
    int T;

    cin >> T;

    while (T--)
    {
        int n, sum = 1;

        cin >> n;

        map<string, int> m;

        for (int i = 0; i < n; i++)
        {
            string a, b;

            cin >> a >> b;
            m[b]++;
        }

        for (auto it : m)
            sum *= it.second + 1;

        cout << sum - 1 << '\n';
    }

    return 0;
}