#include <iostream>
using namespace std;

int main()
{
    int N;
    string s = "WelcomeToSMUPC";

    cin >> N;

    cout << s[(N - 1) % 14] << '\n';

    return 0;
}