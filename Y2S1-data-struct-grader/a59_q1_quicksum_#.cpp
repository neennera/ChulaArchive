#include <bits/stdc++.h>
using namespace std;

int N, M, K, x;
int pf[1001][1001], a[1000][1000];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);

    cin >> N >> M >> K;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }

    for (size_t i = 1; i < N + 1; i++)
    {
        for (size_t j = 1; j < M + 1; j++)
        {
            pf[i][j] = pf[i][j - 1] + pf[i - 1][j] - pf[i - 1][j - 1] + a[i - 1][j - 1];
        }
    }

    // for (size_t i = 0; i < N + 1; i++)
    // {
    //     for (size_t j = 0; j < M + 1; j++)
    //     {
    //         cout << pf[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    while (K--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << pf[c + 1][d + 1] + pf[a][b] - pf[a][d + 1] - pf[c + 1][b] << "\n";
    }
}