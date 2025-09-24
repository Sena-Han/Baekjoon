#include <iostream>
#include <map>
#include <string>
using namespace std;

string name[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    string s;

    cin >> N >> M;

    map<string, int> map;

    for (int i = 1; i <= N; i++)
    {
        cin >> s;

        map.insert({ s, i });
        name[i] = s;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> s;

        if (s[0] >= '1' && s[0] <= '9')
        {
            int n = stoi(s);
            cout << name[n] << '\n';
        }
        else
            cout << map.find(s)->second << '\n';
    }

    return 0;
}