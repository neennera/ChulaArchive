#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second

int N, M, x;
queue<int> q1, q2, q;
map<int, int> ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> x;
        ans[x] = -1;
        q.push(x);
    }

    auto it = ans.begin();
    int money = 0, ct = 0;
    for (int i = 0; i < N; i++)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int a, b;
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
            ct++;
            if (q2.empty() || q1.front() <= q2.front())
            {
                money += q1.front();
                q1.pop();
            }
            else
            {
                money += q2.front();
                q2.pop();
            }

            while (money >= (*it).first && it != ans.end())
            {
                (*it).second = ct;
                it++;
            }
        }
    }

    while (!q.empty())
    {
        cout << ans[q.front()] << " ";
        q.pop();
    }
    return 0;
}