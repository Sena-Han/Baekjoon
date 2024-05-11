#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool b = false;
    string s;

    for (int i = 1; i < 6; i++)
    {
        getline(cin, s);

        if (s.find("FBI") != string::npos)
        {
            cout << i << " ";
            b = true;
        }
    }

    if (b == false)
        cout << "HE GOT AWAY!" << '\n';

    return 0;
}