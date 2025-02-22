#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M, cnt = 0;

    cin >> N >> M;

    deque<int> dq;

    for (int i = 1; i <= N; i++)
        dq.push_back(i);

    while (M--)
    {
        int num, index;

        cin >> num;

        for (int i = 0; i < dq.size(); i++)
        {
            if (dq[i] == num)
            {
                index = i;
                break;
            }
        }

        while (dq.front() != num)
        {
            int tmp;

            if (index < dq.size() - index)
            {
                tmp = dq.front();
                dq.pop_front();
                dq.push_back(tmp);
            }
            else
            {
                tmp = dq.back();
                dq.pop_back();
                dq.push_front(tmp);
            }

            cnt++;
        }

        dq.pop_front();
    }

    cout << cnt << '\n';

    return 0;
}