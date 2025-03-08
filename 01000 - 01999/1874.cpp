#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, cnt = 1;

    cin >> n;

    stack<int> s;
    vector<char> res;

    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        while (cnt <= x)
        {
            s.push(cnt);
            res.push_back('+');

            cnt++;
        }

        if (s.top() == x)
        {
            s.pop();
            res.push_back('-');
        }
        else
        {
            cout << "NO" << '\n';
            return 0;
        }
    }

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << '\n';

    return 0;
}