#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, M, a, b, op;
map<int, int> m;
set<pair<int, int>> s;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        m[a] = 0;
        s.insert(make_pair(0, a));
    }
    while (M--)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> a >> b;
            if (m.find(a) == m.end())
            {
                continue;
            }

            s.erase(s.find(make_pair(m[a], a)));
            m[a] += b;
            s.insert(make_pair(m[a], a));
        }
        else
        {
            bool ans = 1;
            int k;
            cin >> k;

            auto it = s.lower_bound(make_pair(k, 0));

            if (it == s.begin())
            {
                ans = 0;
            }
            else
            {
                it--;
                if (it->first == 0)
                {
                    ans = 0;
                }
            }

            if (ans)
            {
                cout << it->second << "\n";
            }
            else
            {
                cout << "NONE\n";
            }
        }
    }
}