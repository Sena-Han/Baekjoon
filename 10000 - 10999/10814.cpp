#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int cmp(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	int N;

	cin >> N;

	vector<pair<int, string>> v;

	for (int i = 0; i < N; i++)
	{
		int age;
		string name;

		cin >> age >> name;

		v.push_back({ age, name });
	}

	stable_sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << ' ' << v[i].second << '\n';

	return 0;
}