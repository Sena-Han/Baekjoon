#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

bool compare(int a, int b) 
{
    return a > b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;

    cin >> T;

    while (T--)
    {
        int J, N, cnt = 0;

        cin >> J >> N;

        for (int i = 0; i < N; i++)
        {
            int r, c;

            cin >> r >> c;

            arr[i] = r * c;
        }

        sort(arr, arr + N, compare);

        for (int i = 0; i < N; i++)
        {
            if (J <= 0)
                break;

            J -= arr[i];
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}