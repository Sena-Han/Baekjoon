#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, x, y;

    cin >> N;

    vector<pair<int, int>> v;

    while (N--)
    {
        cin >> x >> y;

        v.push_back(make_pair(x, y));
    }

    for (int i = 0; i < v.size(); i++)
    {
        int cnt = 1;

        for (int j = 0; j < v.size(); j++)
        {
            if (v[i].first < v[j].first && v[i].second < v[j].second)
                cnt++;
        }

        cout << cnt << " ";
    }

    return 0;
}