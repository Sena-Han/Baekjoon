#include <iostream>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);

    string s;

    while (true) {
        getline(cin, s);

        if (cin.eof()) break;

        cout << s << "\n";
    }

    return 0;
}