#include <bits/stdc++.h>
using namespace std;

int N, M;
priority_queue<pair<int, int>> pq;
int tt[1000001]; // time of chef
int t[1000001];  // time now  of chef

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> t[i];
        pq.push(make_pair(0, i));
    }

    for (int i = 0; i < M; i++)
    {
        auto [time, c] = pq.top();
        pq.pop();
        cout << -1 * time << "\n";
        tt[c] += t[c];
        pq.push(make_pair(-1 * tt[c], c));
    }
}