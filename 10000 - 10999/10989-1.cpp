#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, arr[10001] = { 0 };

    cin >> N;

    while (N--)
    {
        int tmp;

        cin >> tmp;
        arr[tmp]++;
    }

    for (int i = 1; i < 10001; i++)
    {
        while (arr[i]--)
            cout << i << '\n';
    }

    return 0;
}