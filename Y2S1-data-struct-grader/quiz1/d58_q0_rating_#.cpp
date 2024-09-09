#include <bits/stdc++.h>
using namespace std;

int N;
map<string, pair<int, int>> s, t;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cout << std::fixed << std::setprecision(2);
    cin >> N;
    while (N--)
    {
        int c;
        string ss, tt;
        cin >> ss >> tt >> c;
        if (s.find(ss) == s.end())
        {
            s[ss] = make_pair(c, 1);
        }
        else
        {
            s[ss].first += c;
            s[ss].second++;
        }
        if (t.find(tt) == t.end())
        {
            t[tt] = make_pair(c, 1);
        }
        else
        {
            t[tt].first += c;
            t[tt].second++;
        }
    }

    for (auto [k, v] : s)
    {
        cout << k << " " << (v.first * 1.0) / v.second << "\n";
    }
    for (auto [k, v] : t)
    {
        cout << k << " " << (v.first * 1.0) / v.second << "\n";
    }
}
