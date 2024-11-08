#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int tmp;

        cin >> tmp;

        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        int tmp;

        cin >> tmp;

        cout << binary_search(v.begin(), v.end(), tmp) << '\n';
    }

    return 0;
}