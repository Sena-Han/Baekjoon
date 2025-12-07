#include <iostream>
#include <algorithm>
using namespace std;

string arr[1001];

int main()
{
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
		arr[i] = s.substr(i, s.length());

	sort(arr, arr + s.length());

	for (int i = 0; i < s.length(); i++)
		cout << arr[i] << '\n';

	return 0;
}