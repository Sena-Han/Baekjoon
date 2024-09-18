#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        int tmp;

        cin >> tmp;

        v.insert(v.begin() + tmp, i);
    }

    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";

    return 0;
}