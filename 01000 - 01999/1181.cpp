#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int compare(string a, string b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    int N;
    string res[20000];

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> res[i];

    sort(res, res + N, compare);

    for (int i = 0; i < N; i++)
    {
        if (res[i] != res[i - 1])
            cout << res[i] << '\n';
    }

    return 0;
}