#include <bits/stdc++.h>
using namespace std;

int N, M, a, b;
map<int, int> m;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        m[a]++;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> a;
        bool check = 0;
        for (auto [k, v] : m)
        {
            if (k * 2 > a)
            {
                break;
            }
            if (m.find(a - k) != m.end())
            {
                if (a == k * 2 && m[k] <= 1)
                {
                    continue;
                }
                check = 1;
            }
        }
        if (check)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}