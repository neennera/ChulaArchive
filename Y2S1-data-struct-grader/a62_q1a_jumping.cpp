#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, a[1000000];
ll dp[1000001];

void getData()
{
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    for (size_t i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            dp[i] = a[0];
        }
        else if (i == 2)
        {
            dp[i] = a[0] + a[1];
        }
        else if (i == 3)
        {
            dp[i] = max(dp[1], dp[2]) + a[2];
        }
        else
        {
            dp[i] = max(dp[i - 1], max(dp[i - 2], dp[i - 3])) + a[i - 1];
        }
    }

    cout << dp[N];

    return 0;
}