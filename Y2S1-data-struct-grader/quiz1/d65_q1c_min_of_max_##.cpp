#include <bits/stdc++.h>
using namespace std;

int N, M;
int a[500001];
map<int, int> m;                   // team current highest power
priority_queue<pair<int, int>> pq; // power , team => if team pow not this pop()

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < M; i++)
    {
        m[i] = 1;
        pq.push({-1, i});
    }
    for (int i = 0; i < N; i++)
    {
        int t;
        cin >> t;
        if (a[i] > m[t])
        {
            m[t] = a[i];
            pq.push({-a[i], t});
        }
        while (m[pq.top().second] != pq.top().first * -1)
        {
            pq.pop();
        }
        cout << pq.top().first * -1 << " ";
    }
}