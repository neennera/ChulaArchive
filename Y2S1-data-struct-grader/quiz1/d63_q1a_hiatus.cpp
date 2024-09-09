#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, M;
vector<pair<int, int>> p;
int y, m, a, b;

void getData()
{
    cin >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        cin >> y >> m;
        p.push_back(make_pair(y, m));
    }
    sort(p.begin(), p.end());
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    getData();
    for (size_t i = 0; i < M; i++)
    {
        cin >> y >> m;
        auto it = upper_bound(p.begin(), p.end(), make_pair(y, m));
        if (it == p.begin())
        {
            cout << -1 << " " << -1 << " ";
        }
        else
        {
            it--;
            if ((*it).first == y && (*it).second == m)
            {
                cout << 0 << " " << 0 << " ";
            }
            else
            {
                cout << (*it).first << " " << (*it).second << " ";
            }
        }
    }

    return 0;
}