#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    for (int i = 0; i < 3; i++)
    {
        cin >> s;

        if (s[0] == 'F' || s[0] == 'B')
            continue;

        int n = stoi(s) + 3 - i;

        if (n % 3 == 0 && n % 5 == 0)
        {
            cout << "FizzBuzz" << '\n';
        }
        else if (n % 3 == 0)
        {
            cout << "Fizz" << '\n';
        }
        else if (n % 5 == 0)
        {
            cout << "Buzz" << '\n';
        }
        else
        {
            cout << n << '\n';
        }

        break;
    }

    return 0;
}