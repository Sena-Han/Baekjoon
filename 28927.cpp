#include<iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t1, e1, f1, t2, e2, f2;
	cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;

	int mx = 3 * t1 + 20 * e1 + 120 * f1;
	int mel = 3 * t2 + 20 * e2 + 120 * f2;

	if (mx > mel) 
		cout << "Max\n";
	else if (mx < mel) 
		cout << "Mel\n";
	else 
		cout << "Draw\n";

	return 0;
}