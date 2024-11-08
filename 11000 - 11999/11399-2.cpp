#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, arr[1000], sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i + 1; j++)
            sum += arr[j];
    }

    cout << sum << '\n';

    return 0;
}