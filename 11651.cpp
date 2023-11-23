#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, x, y;
	vector<pair<int, int>> xy;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		xy.push_back(pair<int, int>(y, x));
	}

	sort(xy.begin(), xy.end());

	for (int i = 0; i < N; i++)
		printf("%d %d\n", xy[i].second, xy[i].first);

	return 0;
}