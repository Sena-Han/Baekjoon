#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int n, m, cnt = 0;

    cin >> n >> m;

    vector<string> v;
    map<string, bool> map;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        map.insert(make_pair(s, 1));
    }

    for (int i = 0; i < m; i++)
    {
        cin >> s;

        if (map[s])
        {
            v.push_back(s);
            cnt++;
        }
    }

    sort(v.begin(), v.end());

    cout << cnt << '\n';

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';

    return 0;
}