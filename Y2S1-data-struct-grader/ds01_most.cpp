#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, MM = INT_MIN;
string s, ans;
map<string, int> m;

void getData()
{
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        cin >> s;
        m[s]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    for (auto [ss, ct] : m)
    {
        if (ct >= MM)
        {
            ans = ss;
            MM = ct;
        }
    }

    cout << ans << " " << MM;
    return 0;
}