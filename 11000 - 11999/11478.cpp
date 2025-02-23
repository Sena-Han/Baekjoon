#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;

    cin >> s;

    set<string> s1;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
            s1.insert(s.substr(i, j - i + 1));
    }

    cout << s1.size() << '\n';

    return 0;
}