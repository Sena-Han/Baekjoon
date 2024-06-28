#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	int sum = 1;

	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == ',')
			sum++;
	}

	cout << sum << endl;

	return 0;
}