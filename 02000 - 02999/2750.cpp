#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
        cout << arr[i] << '\n';

    return 0;
}