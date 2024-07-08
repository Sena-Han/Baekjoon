#include <iostream>
#include <string>
using namespace std;

string board[50];

int WB_count(int x, int y);
int BW_count(int x, int y);

string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};

int WB_count(int x, int y)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }

    return cnt;
}

int BW_count(int x, int y)
{
    int cnt = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    int N, M, sum = 65;

    cin >> N >> M;
    cin.ignore();

    for (int i = 0; i < N; i++)
        getline(cin, board[i]);

    for (int i = 0; i + 8 <= N; i++)
    {
        for (int j = 0; j + 8 <= M; j++)
        {
            int tmp = min(WB_count(i, j), BW_count(i, j));

            if (tmp < sum)
                sum = tmp;
        }
    }

    cout << sum << '\n';

    return 0;
}