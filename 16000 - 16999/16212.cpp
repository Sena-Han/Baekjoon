#include <iostream>
#include <algorithm>
using namespace std;

int arr[500001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}