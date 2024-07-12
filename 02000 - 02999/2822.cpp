#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    vector<pair<int, int>> v;

    for (int i = 1; i <= 8; i++)
    {
        int score;

        cin >> score;
        v.push_back(make_pair(i, score));
    }

    sort(v.begin(), v.end(), compare);

    int sum = 0, num[5];

    for (int i = 0; i < 5; i++)
    {
        sum += v[i].second;
        num[i] = v[i].first;
    }

    sort(num, num + 5);

    cout << sum << '\n';

    for (int i = 0; i < 5; i++)
        cout << num[i] << " ";

    return 0;
}