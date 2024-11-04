#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, cnt = 1;

    cin >> N;

    vector<pair<int, int>> v;

    for (int i = 0; i < N; i++)
    {
        int n, m;

        cin >> n >> m;
        v.push_back(make_pair(m, n));
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (v[i].first <= v[j].second)
            {
                cnt++;
                i = j - 1;

                break;
            }
        }
    }

    cout << cnt << '\n';

    return 0;
}