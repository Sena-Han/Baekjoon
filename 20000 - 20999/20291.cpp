#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    map<string, int> map;

    while (n--)
    {
        string s;

        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '.')
            {
                s = s.substr(i + 1, s.length() - 1);
                break;
            }
        }

        if (map.find(s) != map.end())
            map[s]++;
        else
            map.insert({ s, 1 });
    }

    for (auto it : map)
        cout << it.first << " " << it.second << '\n';

    return 0;
}