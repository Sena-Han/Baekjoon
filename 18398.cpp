#include <iostream>
using namespace std;

int main() 
{
    int T, N, A, B;

    cin >> T;

    while (T--)
    {
        cin >> N;

        while (N--)
        {
            cin >> A >> B;
            cout << A + B << " " << A * B << '\n';
        }
    }

    return 0;
}