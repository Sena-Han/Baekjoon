#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int happy = 0, sad = 0;

    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ':' && s[i + 1] == '-')
        {
            if (s[i + 2] == ')')
                happy++;
            else
                sad++;
        }
    }

    if (happy == 0 && sad == 0)
        cout << "none" << '\n';
    else if (happy == sad)
        cout << "unsure" << '\n';
    else if (happy > sad)
        cout << "happy" << '\n';
    else
        cout << "sad" << '\n';

    return 0;
}