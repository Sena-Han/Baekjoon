#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;

    queue<int> q;

    cin >> N;

    for (int i = 1; i <= N; i++)
        q.push(i);

    while (1)
    {
        if (!q.empty())
        {
            cout << q.front() << " ";

            q.pop();
            q.push(q.front());
            q.pop();
        }
        else
            break;
    }

    return 0;
}