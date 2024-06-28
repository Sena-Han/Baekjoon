#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 0;
    string n;

    cin >> n;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '=')
        {
            if (n[i - 1] == 'z' && n[i - 2] == 'd')
                sum--;
        }
        else if (n[i] == 'j')
        {
            if (n[i - 1] != 'l' && n[i - 1] != 'n')
                sum++;
        }
        else if (n[i] != '-')
        {
            sum++;
        }
    }

    cout << sum << '\n';

    return 0;
}