#include <iostream>
#include <algorithm>
using namespace std;

int Count();
void DFS(int x, int y, char c);

int N;
char arr[101][101];
bool check[101][101];

int Count()
{
    int cnt = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (!check[i][j])
            {
                cnt++;
                DFS(i, j, arr[i][j]);
            }
        }
    }

    return cnt;
}

void DFS(int x, int y, char c)
{
    if (x < 0 || x >= N || y < 0 || y >= N) 
        return;

    if (check[x][y] || arr[x][y] != c)
        return;

    if (arr[x][y] == 'R')
        arr[x][y] = 'G';

    check[x][y] = true;

    DFS(x + 1, y, c);
    DFS(x - 1, y, c);
    DFS(x, y + 1, c);
    DFS(x, y - 1, c);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    }

    cout << Count() << " ";

    fill(&check[0][0], &check[100][100], false);

    cout << Count() << '\n';

    return 0;
}