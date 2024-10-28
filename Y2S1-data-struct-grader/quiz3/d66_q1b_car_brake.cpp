#include <bits/stdc++.h>
using namespace std;

int N, M, s;
map<int, int> m, ans;
priority_queue<pair<int, int>> qs, qt; // question speed, question time
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M >> s;
    for (size_t i = 0; i < N; i++)
    {
        int t, d;
        cin >> t >> d;
        m[t] = d;
    }
    for (size_t i = 0; i < M; i++)
    {
        int a, q;
        cin >> a >> q;
        if (a == 1)
        {
            // what speed at time q
            qs.push({-q, i});
        }
        else
        {
            // how many time cas has speed q;
            if (q > s)
            {
                ans[i] = 0;
            }
            else
            {
                qt.push({q, i});
            }
        }
    }

    for (auto [t, d] : m)
    {
        while (!qs.empty() && (-1 * qs.top().first) < t)
        {
            ans[qs.top().second] = s;
            qs.pop();
        }
        s = max(0, s - d);
        while (!qt.empty() && qt.top().first > s)
        {
            ans[qt.top().second] = t;
            qt.pop();
        }
    }
    while (!qs.empty())
    {
        ans[qs.top().second] = 0;
        qs.pop();
    }
    for (auto [k, v] : ans)
    {
        cout << v << endl;
    }
}