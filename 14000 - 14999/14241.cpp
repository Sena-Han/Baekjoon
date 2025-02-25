#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, res = 0;

    cin >> N;

    stack<int> s;

    for (int i = 0; i < N; i++)
    {
        int tmp;

        cin >> tmp;
        s.push(tmp);
    }

    while (s.size() > 1)
    {
        int x = s.top();
        s.pop();

        int y = s.top();
        s.pop();

        res += x * y;
        s.push(x + y);
    }

    cout << res << '\n';

    return 0;
}