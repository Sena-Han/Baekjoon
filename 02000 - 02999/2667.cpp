#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 26;

int n;
int arr[MAX][MAX];

vector<int> v;

void DFS(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n || !arr[x][y])
        return;

    arr[x][y] = false;
    v[v.size() - 1]++;

    DFS(x + 1, y);
    DFS(x - 1, y);
    DFS(x, y + 1);
    DFS(x, y - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;

        cin >> s;

        for (int j = 0; j < n; j++)
            arr[i][j] = s[j] - '0';
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j])
            {
                v.push_back(0);
                DFS(i, j);
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';

    return 0;
}