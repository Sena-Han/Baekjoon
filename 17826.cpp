#include <iostream>
using namespace std;

int main()
{
	int n[50], H, rank;

	for (int i = 0; i < 50; i++)
		cin >> n[i];

	cin >> H;

	for (int i = 0; i < 50; i++)
	{
		if (n[i] == H)
			rank = i + 1;
	}

	if (rank <= 5)
		cout << "A+" << endl;
	else if (rank <= 15)
		cout << "A0" << endl;
	else if (rank <= 30)
		cout << "B+" << endl;
	else if (rank <= 35)
		cout << "B0" << endl;
	else if (rank <= 45)
		cout << "C+" << endl;
	else if (rank <= 48)
		cout << "C0" << endl;
	else
		cout << "F" << endl;

	return 0;
}