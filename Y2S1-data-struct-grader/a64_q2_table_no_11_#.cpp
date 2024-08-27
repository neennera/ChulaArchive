#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, mod = 100000007;
int dp[10000001][3];
void getData()
{
    cin >> N;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    dp[0][0] = dp[0][1] = dp[0][2] = 1; // column1
    for (size_t i = 1; i < N; i++)
    {

        dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2]) % mod;
        dp[i][1] = (dp[i - 1][0] + dp[i - 1][2]) % mod;
        dp[i][2] = (dp[i - 1][0] + dp[i - 1][1]) % mod;

        // cout << dp[i][0] << " " << dp[i][1] << " " << dp[i][2] << "\n";
    }

    cout << (dp[N - 1][0] + dp[N - 1][1] + dp[N - 1][2]) % mod;
    return 0;
}