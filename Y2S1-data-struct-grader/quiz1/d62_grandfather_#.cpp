#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, M;
map<ll, ll> m;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    while (N--)
    {
        ll f, s;
        cin >> f >> s;
        m[s] = f;
    }
    while (M--)
    {
        ll a, b;
        cin >> a >> b;
        bool c = 1;
        auto pa = m.find(a), pb = m.find(b);
        if (pa == m.end() || pb == m.end() || a == b)
        {
            c = 0;
        }
        else
        {
            auto gfa = m.find(pa->second), gfb = m.find(pb->second);
            if (gfa == m.end() || gfb == m.end() || gfa->second != gfb->second)
            {
                c = 0;
            }
        }
        if (c)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}