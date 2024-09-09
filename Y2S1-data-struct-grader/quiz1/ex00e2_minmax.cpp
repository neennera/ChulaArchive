#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, M, R, a[100][100];
int r1, c1, r2, c2;

void getData()
{
    cin >> N >> M >> R;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    for (int i = 0; i < R; i++)
    {

        int ans = INT_MIN;
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 || c1 > c2)
        {
            cout << "INVALID\n";
            continue;
        }
        if (r1 > N || r2 < 1 || c1 > M || c2 < 1)
        {
            cout << "OUTSIDE\n";
            continue;
        }
        for (int i = max(0, r1 - 1); i < min(r2, N); i++)
        {
            for (int j = max(0, c1 - 1); j < min(c2, M); j++)
            {
                ans = max(ans, a[i][j]);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}