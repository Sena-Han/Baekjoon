#include <iostream>
using namespace std;

int main()
{
	int N, money, sum = 0;

	cin >> N;

	money = 1000 - N;

	if (money >= 500)
	{
		sum += money / 500;
		money %= 500;
	}

	if (money >= 100)
	{
		sum += money / 100;
		money %= 100;
	}

	if (money >= 50)
	{
		sum += money / 50;
		money %= 50;
	}

	if (money >= 10)
	{
		sum += money / 10;
		money %= 10;
	}

	if (money >= 5)
	{
		sum += money / 5;
		money %= 5;
	}

	if (money >= 1)
	{
		sum += money / 1;
		money %= 1;
	}

	cout << sum << endl;

	return 0;
}