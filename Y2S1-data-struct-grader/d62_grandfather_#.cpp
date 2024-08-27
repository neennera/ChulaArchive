#include <bits/stdc++.h>
using namespace std;
#define ll long long
int N, M;
ll a, b;
map<ll, ll> fa;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a >> b;
        fa[b] = a;
    }
    for (size_t i = 0; i < M; i++)
    {
        cin >> a >> b;
        if (a == b)
        {
            cout << "NO\n";
            continue;
        }
        auto faa_it = fa.find(a);
        auto fbb_it = fa.find(b);
        if (!(faa_it != fa.end() && fbb_it != fa.end()))
            cout << "NO\n";
        else
        {
            auto ga_it = fa.find(fa[a]);
            auto gb_it = fa.find(fa[b]);
            if (!(ga_it != fa.end() && gb_it != fa.end()))
                cout << "NO\n";
            else
            {
                if (fa[fa[a]] == fa[fa[b]])
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }
}