#include <iostream>
using namespace std;

int main()
{
    string S;
    int T, A, B;

    cin >> S >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> A >> B;

        char tmp = S[A];
        S[A] = S[B];
        S[B] = tmp;
    }

    cout << S << '\n';

    return 0;
}