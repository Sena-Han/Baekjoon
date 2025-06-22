#include <iostream>
#include <set>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int N, M, res = 0;

    cin >> N >> M;

    set<string> s1;

    for (int i = 0; i < N; i++)
    {
        cin >> s;

        s1.insert(s);
    }

    for (int i = 0; i < M; i++)
    {
        cin >> s;

        if (s1.find(s) != s1.end())
            res++;
    }

    cout << res << '\n';

    return 0;
}