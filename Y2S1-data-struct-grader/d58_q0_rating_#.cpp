#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, x;
map<string, pair<int, int>> m; // name, <sum, count>
string a, b;

void getData()
{
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a >> b >> x;
        auto it1 = m.find(a);
        if (it1 == m.end())
        {
            m[a] = make_pair(x, 1);
        }
        else
        {
            auto [s, c] = m[a];
            m[a].first = s + x;
            m[a].second += 1;
        }

        auto it2 = m.find(b);
        if (it2 == m.end())
        {
            m[b] = make_pair(x, 1);
        }
        else
        {
            auto [s, c] = m[b];
            m[b].first = s + x;
            m[b].second += 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    cout << std::fixed << std::setprecision(2);
    // for (auto it = m.begin(); it < m.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second.first * 1.0 / (*it).second.second << "\n";
    // }

    for (auto [k, v] : m)
    {
        cout << k << " " << v.first * 1.0 / v.second << "\n";
    }
    return 0;
}