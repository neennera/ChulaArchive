#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, a, b, c;
int dp[4001];

void getData()
{
    cin >> N >> a >> b >> c;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    dp[0] = 1;
    for (size_t i = 1; i <= N; i++)
    {
        if (i >= a && dp[i - a] != 0)
        {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i >= b && dp[i - b] != 0)
        {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i >= c && dp[i - c] != 0)
        {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
        // cout << i << " " << dp[i] << "\n";
    }

    cout << dp[N] - 1;

    return 0;
}