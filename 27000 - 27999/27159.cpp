#include <iostream>
using namespace std;

int main()
{
    int N, arr[33], sum = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    sum += arr[0];

    for (int i = 1; i < N; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
            sum += arr[i];
    }

    cout << sum << '\n';

    return 0;
}