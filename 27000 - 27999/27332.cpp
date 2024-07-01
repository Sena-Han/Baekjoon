#include <iostream>
using namespace std;

int main()
{
    int a, b, res; 
    
    cin >> a >> b;

    res = (7 * b) + a;

    if (res >= 1 && res <= 30) 
        cout << "1" << '\n';
    else 
        cout << "0" << '\n';

    return 0;
}