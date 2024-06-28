#include <iostream>
using namespace std;

int main()
{
    string N;
    int sumL = 0, sumR = 0;

    cin >> N;

    for (int i = 0; i < N.length() / 2; i++)
        sumL += N[i];

    for (int i = N.length() / 2; i < N.length(); i++)
        sumR += N[i];

    if (sumL == sumR)
        cout << "LUCKY" << '\n';
    else
        cout << "READY" << '\n';

    return 0;
}