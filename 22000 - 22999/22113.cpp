#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, bus[100];

    cin >> n >> m;

    for (int i = 0; i < m; i++)
        cin >> bus[i];

    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    int sum = 0;

    for (int i = 0; i < m - 1; i++)
        sum += arr[bus[i] - 1][bus[i + 1] - 1];

    cout << sum << '\n';

    return 0;
}