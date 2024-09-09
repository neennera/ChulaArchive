#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, M, a[501][501], dp[501][501];
void getData()
{
    cin >> N >> M;
    for (size_t i = 1; i <= N; i++)
    {
        for (size_t j = 1; j <= M; j++)
        {
            cin >> a[i][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    for (size_t i = 1; i <= N; i++)
    {
        for (size_t j = 1; j <= M; j++)
        {
            if (i != 1 && j != 1)
            {
                dp[i][j] = max(max(dp[i - 1][j], dp[i][j - 1]) + a[i][j], dp[i - 1][j - 1] + (2 * a[i][j]));
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
            }
        }
    }
    // for (size_t i = 1; i <= N; i++)
    // {
    //     for (size_t j = 1; j <= M; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[N][M];
    return 0;
}