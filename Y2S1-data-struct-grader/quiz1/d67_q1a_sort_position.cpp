#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second

int N, M, a;
priority_queue<pair<ll, int>> p;
int ans[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        p.push({-1 * a, -1 * i});
    }

    int i = 0;
    while (!p.empty())
    {
        ans[p.top().second * -1] = i++;
        p.pop();
    }
    for (int i = 0; i < N; i++)
    {
        cout << ans[i] + 1 << " ";
    }
}
