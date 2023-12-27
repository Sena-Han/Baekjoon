#include <iostream>
using namespace std;

int main() 
{
    int N, U, L;

    cin >> N >> U >> L;

    if (N < 1000)
        cout << "Bad" << '\n';
    else if (U >= 8000 || L >= 260)
        cout << "Very Good" << '\n';
    else
        cout << "Good" << '\n';

    return 0;
}