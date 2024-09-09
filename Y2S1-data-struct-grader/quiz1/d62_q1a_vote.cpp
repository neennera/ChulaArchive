#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, K;
string s;
map<string, int> m;
vector<int> v;
void getData()
{
    cin >> N >> K;
    for (size_t i = 0; i < N; i++)
    {
        cin >> s;
        auto it = m.find(s);
        if (it == m.end())
        {
            m[s] = 1;
        }
        else
        {
            m[s]++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    int ct = 0;
    for (auto [x, y] : m)
    {
        // cout << x << " " << y << "\n";
        ct++;
        v.push_back(y);
    }
    sort(v.begin(), v.end(), greater<int>());

    cout << v[min(ct - 1, K - 1)];
    return 0;
}