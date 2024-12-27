#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    string a, b;

    cin >> N >> M;

    map<string, string> m;
    map<string, string>::iterator it;

    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;

        m.insert({ a, b });
    }

    for (int i = 0; i < M; i++)
    {
        cin >> a;

        it = m.find(a);
        cout << it->second << '\n';
    }

    return 0;
}