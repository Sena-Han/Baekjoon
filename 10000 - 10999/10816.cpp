#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M, card;

    unordered_map<int, int> um;

    cin >> N;

    while (N--)
    {
        cin >> card;
        um[card]++;
    }

    cin >> M;

    while (M--)
    {
        cin >> card;
        cout << um[card] << " ";
    }

    return 0;
}