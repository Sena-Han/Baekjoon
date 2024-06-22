#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, arr[10000] = { 0 };

    cin >> N;

    while (N--)
    {
        int tmp;

        cin >> tmp;
        arr[tmp - 1]++;
    }

    for (int i = 0; i < 10000; i++)
    {
        while (arr[i]--)
            cout << i + 1 << '\n';
    }

    return 0;
}