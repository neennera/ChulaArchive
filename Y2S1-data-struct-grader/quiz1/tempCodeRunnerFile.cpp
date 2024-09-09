#include <bits/stdc++.h>
using namespace std;

int N, M, a, b;
queue<int> q1, q2, q; // order queue & ans order
map<int, int> m;      // order goal & when finish
int ct = 0, r = 0;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> a;
        q.push(a);
        m[a] = -1;
    }
    auto it = m.begin();
    while (N--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            cin >> a >> b;
            if (a == 1)
            {
                q1.push(b);
            }
            else
            {
                q2.push(b);
            }
        }
        else
        {
            r++;
            if (q1.empty())
            {
                ct += q2.front();
                q2.pop();
            }
            else if (q2.empty())
            {
                ct += q1.front();
                q1.pop();
            }
            else if (q1.front() <= q2.front())
            {
                ct += q1.front();
                q1.pop();
            }
            else
            {
                ct += q2.front();
                q2.pop();
            }
            // cout << "ct : " << ct << "\n";
            while (it != m.end() && it->first <= ct)
            {
                it->second = r;
                it++;
            }
        }
    }
    while (!q.empty())
    {
        cout << m[q.front()] << " ";
        q.pop();
    }
}