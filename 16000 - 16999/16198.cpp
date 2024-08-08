#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int res = 0;

void dfs(vector<int>& v, int sum)
{
	if (v.size() == 2)
	{
		res = max(res, sum);

		return;
	}

	for (int i = 1; i < v.size() - 1; i++)
	{
		int tmp = v[i - 1] * v[i + 1];

		vector<int> copy = v;
		copy.erase(copy.begin() + i);

		dfs(copy, sum + tmp);
	}
}

int main()
{
	int N;

	cin >> N;

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		int w;

		cin >> w;
		v.push_back(w);
	}

	dfs(v, 0);

	cout << res << '\n';

	return 0;
}