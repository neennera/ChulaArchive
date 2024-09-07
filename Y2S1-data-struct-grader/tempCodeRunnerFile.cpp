#include <bits/stdc++.h>
using namespace std;

int N, M, a, b, op;
map<int, int> m;
set<int> item;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        item.insert(a);
    }
    while (M--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> a >> b;
            if (item.find(a) == item.end())
            {
                continue;
            }
            m[a] += b;
        }
        else
        {
            int ans = 0, ans_ct = -1;
            int k;
            cin >> k;
            for (auto [f, s] : m)
            {
                if (s <= 0 || s >= k)
                {
                    continue;
                }
                if (ans_ct == s && f > ans)
                {
                    ans = f;
                }
                else if (s > ans_ct)
                {
                    ans = f;
                    ans_ct = s;
                }
            }
            if (ans_ct != -1)
            {
                cout << ans << "\n";
            }
            else
            {
                cout << "NONE\n";
            }
        }
    }
}