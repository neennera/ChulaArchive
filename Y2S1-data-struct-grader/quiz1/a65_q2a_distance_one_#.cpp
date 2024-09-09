#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, K, mod = 100000007;
int dp[5001][2];
void getData()
{
    cin >> N >> K;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    dp[0][0] = dp[0][1] = 1; // column 1
    for (size_t i = 1; i < N; i++)
    {
        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % mod;
        if (i < K)
        {
            dp[i][1] = 1;
        }
        else
        {
            dp[i][1] = (dp[i - K][0] + dp[i - K][1]) % mod;
        }
        // cout << dp[i][0] << " " << dp[i][1] << "\n";
    }

    cout << (dp[N - 1][0] + dp[N - 1][1]) % mod;
    return 0;
}