#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	if (N >= 620 && N <= 780)
		cout << "Red" << endl;
	else if (N >= 590 && N < 650)
		cout << "Orange" << endl;
	else if (N >= 570 && N < 590)
		cout << "Yellow" << endl;
	else if (N >= 495 && N < 570)
		cout << "Green" << endl;
	else if (N >= 450 && N < 495)
		cout << "Blue" << endl;
	else if (N >= 425 && N < 450)
		cout << "Indigo" << endl;
	else if (N >= 380 && N < 425)
		cout << "Violet" << endl;

	return 0;
}