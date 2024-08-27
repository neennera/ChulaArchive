#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, M, a;
set<int> s;
map<int, int> m;

void getData()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        m[a]++;
        s.insert(a);
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    for (size_t i = 0; i < M; i++)
    {
        bool ct = true;
        cin >> a;
        for (auto j : s)
        {
            if (s.find(a - j) == s.end() || (j * 2 == a && m[j] < 2))
            {
                continue;
            }

            cout << "YES\n";
            ct = false;
            break;
        }
        if (ct)
        {
            cout << "NO\n";
        }
    }

    return 0;
}