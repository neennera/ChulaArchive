#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, a[100][100], m[101][101];
void getData()
{
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            m[i][j] = max(m[i + 1][j], m[i + 1][j + 1]) + a[i][j];
            // cout << m[i][j] << " ";
            // cout << i << " " << j << " || ";
        }
        // cout << endl;
    }

    cout << m[0][0];

    return 0;
}