#include <iostream>
#include <algorithm>
using namespace std;

int arr[100001];

int main()
{
    int n, x, res = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> x;

    sort(arr, arr + n);

    int left = 0, right = n - 1;

    while (left < right)
    {
        if (arr[left] + arr[right] == x)
        {
            res++;

            left++;
            right--;
        }
        else if (arr[left] + arr[right] < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << res << '\n';

    return 0;
}