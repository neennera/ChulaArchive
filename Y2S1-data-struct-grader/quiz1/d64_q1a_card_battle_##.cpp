#include <bits/stdc++.h>
using namespace std;

int N, M, ans = 1, a;
bool lose = false;
multiset<int> v;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        v.insert(a);
    }
    // sort(v.begin(), v.end());

    for (int i = 0; i < M; i++)
    {
        int r;
        cin >> r;
        for (int j = 0; j < r; j++)
        {
            cin >> a;
            if (lose)
                continue;
            // auto it = lower_bound(v.begin(), v.end(), a + 1);
            auto it = v.lower_bound(a + 1);
            if (it == v.end())
            {
                lose = true;
                continue;
            }
            // cout << "use : " << *it;
            v.erase(it);
        }
        if (!lose)
        {
            ans++;
        }
    }
    cout << ans;
}