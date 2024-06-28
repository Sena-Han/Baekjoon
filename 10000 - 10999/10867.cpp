#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, tmp = 0;

    cin >> N;

    vector<int> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++)
    {
        if (tmp == v[i])
            continue;

        cout << v[i] << " ";
        tmp = v[i];
    }

    return 0;
}