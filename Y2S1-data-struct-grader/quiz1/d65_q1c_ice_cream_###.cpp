#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second

vector<pair<int, int>> s;
vector<pair<int, int>> m;
int N, M, a, b;

void getData()
{
    cin >> N >> M >> b;
    s.push_back(make_pair(0, b));
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        s.push_back(make_pair(a, b));
    }
    sort(s.begin(), s.end());
    auto it = s.begin();
    int ct = 0, add = b;
    for (int i = 0; i <= 100001; i++)
    {
        if (it != s.end() && i >= it->first)
        {
            add = it->second;
            it++;
        }
        ct += add;
        m.push_back(make_pair(ct, i));
    }

    // for (auto [f, s] : m)
    // {
    //     if (s == 10)
    //     {
    //         break;
    //     }
    //     cout << "--- day " << s << " : " << f << "\n";
    // }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    for (int i = 0; i < M; i++)
    {
        int p, x;
        cin >> p >> x;
        auto it = lower_bound(m.begin(), m.end(), make_pair(p, 0));
        if (it->second <= x)
        {
            cout << it->second << " ";
        }
        else
        {
            it = lower_bound(m.begin(), m.end(), make_pair(p + m[x].first, 0));
            cout << it->second << " ";
        }
    }

    return 0;
}
