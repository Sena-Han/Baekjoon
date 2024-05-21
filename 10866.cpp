#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int N;
    string s;

    deque<int> dq;

    cin >> N;

    while (N--)
    {
        cin >> s;

        if (s == "push_front")
        {
            int X;

            cin >> X;
            dq.push_front(X);
        }
        else if (s == "push_back")
        {
            int X;

            cin >> X;
            dq.push_back(X);
        }
        else if (s == "pop_front")
        {
            if (!dq.empty())
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else
                cout << -1 << '\n';
        }
        else if (s == "pop_back")
        {
            if (!dq.empty())
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else
                cout << -1 << '\n';
        }
        else if (s == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (s == "empty")
        {
            cout << dq.empty() << '\n';
        }
        else if (s == "front")
        {
            if (!dq.empty())
                cout << dq.front() << '\n';
            else
                cout << -1 << '\n';
        }
        else if (s == "back")
        {
            if (!dq.empty())
                cout << dq.back() << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}