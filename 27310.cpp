#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string n;
	int u = 0;

	cin >> n;

	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] == '_')
			u++;
	}

	cout << n.length() + 2 + u * 5 << '\n';

    return 0;
}