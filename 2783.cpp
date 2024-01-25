#include <iostream>
using namespace std;

int main()
{
    int N;
    double X, Y, min, tmpX, tmpY;

    cin >> X >> Y >> N;

    min = X / Y;

    for (int i = 0; i < N; i++)
    {
        cin >> tmpX >> tmpY;
        
        if (min > tmpX / tmpY)
            min = tmpX / tmpY;
    }

    cout << min * 1000 << '\n';

    return 0;
}