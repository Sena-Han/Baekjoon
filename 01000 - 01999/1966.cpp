#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int T, N, M, tmp;

	cin >> T;

	while (T--)
	{
		cin >> N >> M;

		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < N; i++)
		{
			cin >> tmp;

			q.push(make_pair(i, tmp));
			pq.push(tmp);
		}

		int cnt = 0;

		while (!q.empty())
		{
			int index = q.front().first;
			int priority = q.front().second;

			q.pop();

			if (pq.top() == priority)
			{
				cnt++;
				pq.pop();

				if (index == M)
				{
					cout << cnt << '\n';
					break;
				}
			}
			else
				q.push(make_pair(index, priority));
		}
	}

	return 0;
}