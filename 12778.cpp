#include <iostream>
using namespace std;

int main()
{
    int T, M;
    char c;

    cin >> T;

    while (T--)
    {
        cin >> M >> c;

        for (int i = 0; i < M; i++)
        {
            if (c == 'C')
            {
                char tmp;

                cin >> tmp;
                cout << (int)(tmp - 'A' + 1) << " ";
            }
            else
            {
                int tmp;
                cin >> tmp;

                cout << (char)(tmp + 'A' - 1) << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}