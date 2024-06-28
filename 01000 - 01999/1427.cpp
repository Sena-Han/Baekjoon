#include <iostream>
using namespace std;

int main()
{
    string N;

    cin >> N;

    for (int i = 0; i < N.length(); i++)
    {
        for (int j = i + 1; j < N.length(); j++)
        {
            if (N[i] < N[j])
            {
                int tmp = N[i];
                N[i] = N[j];
                N[j] = tmp;
            }
        }
    }

    cout << N << '\n';

    return 0;
}