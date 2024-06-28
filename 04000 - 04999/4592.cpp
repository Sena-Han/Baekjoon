#include <iostream>
using namespace std;

int main()
{
	int N, tmp[25], res[25];

	while (1)
	{
		cin >> N;

		if (N == 0)
			break;

		for (int i = 0; i < N; i++)
			cin >> tmp[i];

		int j = 0;

		for (int i = 0; i < N; i++)
		{
			if (i == 0)
				res[j++] = tmp[i];
			else
			{
				if (tmp[i] != res[j - 1])
					res[j++] = tmp[i];
			}
		}

		res[j] = '$';

		for (int i = 0; res[i] != '$'; i++)
			cout << res[i] << " ";

		cout << '$' << endl;
	}

	return 0;
}