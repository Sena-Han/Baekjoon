#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string n, res;

    cin >> N >> n;

    res = n;

    for (int i = 1; i < N; i++)
    {
        cin >> n;

        for (int j = 0; j < n.length(); j++)
        {
            if (res[j] != n[j])
                res[j] = '?';
        }
    }

    cout << res << '\n';

    return 0;
}