#include <iostream>
using namespace std;

int main()
{
    int T;
    double price;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> price;
        printf("$%.2f\n", price * 0.8);
    }

    return 0;
}