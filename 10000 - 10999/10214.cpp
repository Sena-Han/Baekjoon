#include <iostream>
using namespace std;

int main()
{
	int T, Y, K;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int Ysum = 0, Ksum = 0;

		for (int j = 0; j < 9; j++)
		{
			cin >> Y >> K;

			Ysum += Y;
			Ksum += K;
		}

		if (Ysum > Ksum)
			cout << "Yonsei" << endl;
		else if (Ksum > Ysum)
			cout << "Korea" << endl;
		else
			cout << "Draw" << endl;
	}

	return 0;
}