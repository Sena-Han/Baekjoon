#include <iostream>
using namespace std;

int main()
{
    int N, X, S, T, ans = -1;

    cin >> N >> X;

    for (int i = 0; i < N; i++) 
    {
        cin >> S >> T;

        if (S + T <= X && ans < S)
            ans = S;
    }

    cout << ans << '\n';

	return 0;
}