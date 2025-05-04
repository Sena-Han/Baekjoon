#include <iostream>
using namespace std;

#define MAX 9

int N;
int arr[MAX];
bool visited[MAX];

void dfs(int cnt)
{
    if (cnt == N)
    {
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";

        cout << '\n';

        return;
    }

    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            arr[cnt] = i;
            visited[i] = true;

            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    cin >> N;

    dfs(0);

    return 0;
}