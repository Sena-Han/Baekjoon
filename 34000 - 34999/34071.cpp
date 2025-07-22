#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, arr[101];

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int tmp = arr[0];

    sort(arr, arr + N);

    if (tmp == arr[0])
        cout << "ez" << '\n';
    else if (tmp == arr[N - 1])
        cout << "hard" << '\n';
    else
        cout << "?" << '\n';

    return 0;
}