#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    string s;

    queue<int> q;

    cin >> N;

    while (N--)
    {
        cin >> s;

        if (s == "push")
        {
            int X;

            cin >> X;
            q.push(X);
        }
        else if (s == "pop")
        {
            if (!q.empty())
            {
                cout << q.front() << '\n';
                q.pop();
            }
            else
                cout << -1 << '\n';
        }
        else if (s == "size")
        {
            cout << q.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << q.empty() << '\n';
        }
        else if (s == "front")
        {
            if (!q.empty())
                cout << q.front() << '\n';
            else
                cout << -1 << '\n';
        }
        else if (s == "back")
        {
            if (!q.empty())
                cout << q.back() << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}