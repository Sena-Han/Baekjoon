#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

bool binary_search(int len, int target)
{
    int low = 0, high = len - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (target == v[mid])
            return true;

        if (target < v[mid])
            high = mid - 1;
        else if (target > v[mid])
            low = mid + 1;
    }

    return false;
}

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

        cout << binary_search(N, tmp) << '\n';
    }

    return 0;
}