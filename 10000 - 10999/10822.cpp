#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S, tmp;
	long long sum = 0;

	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == ',')
		{
			sum += stoi(tmp);
			tmp = "";
		}
		else
			tmp += S[i];
	}

	cout << sum + stoi(tmp) << endl;

	return 0;
}