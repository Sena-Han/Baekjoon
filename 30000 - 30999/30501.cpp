#include <iostream>
using namespace std;

int main()
{
    int N;
    string n;

    cin >> N;

    while (N--)
    {
        cin >> n;

        for (int i = 0; i < n.length(); i++)
        {
            if (n[i] == 'S')
            {
                cout << n << '\n';
                break;
            }
        }
    }

    return 0;
}