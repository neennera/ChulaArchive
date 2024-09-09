#include <bits/stdc++.h>
using namespace std;

int N, M, A, u, i, v;
int pieces[1000001];
string op;
vector<map<int, int>> auc;
map<int, set<int>> ans;

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M >> A;
    for (int i = 1; i <= N; i++)
    {
        cin >> pieces[i];
    }

    auc.resize(N + 1);
    while (A--)
    {
        cin >> op;
        if (op == "B")
        {
            cin >> u >> i >> v;
            auc[i][u] = v;
        }
        else
        {
            cin >> u >> i;
            auto it = auc[i].find(u);
            if (it != auc[i].end())
            {
                auc[i].erase(it);
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (auc[i].size() < pieces[i])
        {
            for (auto [k, v] : auc[i])
            {
                ans[k].insert(i);
            }
        }
        else
        {
            priority_queue<pair<int, int>> pq;
            for (auto [k, v] : auc[i])
            {
                pq.push(make_pair(v, k));
            }
            int ct = pieces[i];
            while (ct--)
            {
                int user = pq.top().second;
                // cout << user << " got " << i << "\n";
                pq.pop();
                ans[user].insert(i);
            }
        }
    }
    for (int i = 1; i <= M; i++)
    {
        if (ans[i].size() == 0)
        {
            cout << "NONE\n";
        }
        else
        {
            for (auto x : ans[i])
            {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
}