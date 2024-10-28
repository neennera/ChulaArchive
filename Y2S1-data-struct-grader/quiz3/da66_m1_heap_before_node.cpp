#include <bits/stdc++.h>
using namespace std;

int n, a, c = 0, h = 0, l, r, ll, rr;
queue<int> q;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n >> a;
    if (a == 0)
    {
        cout << 0;
        return 0;
    }
    l = r = a;
    ll = rr = 0;

    while (1)
    {
        bool ct = 0;
        for (int i = ll; i <= min(n - 1, rr); i++)
        {
            if (i >= l && i <= r)
            {
                ct = 1;
                continue;
            }
            c++;
            q.push(i);
        }
        if ((ll * 2) + 1 >= n)
            break;
        ll = (ll * 2) + 1;
        rr = min(n, (rr * 2) + 2);
        if (ct)
        {
            l = min(n, (l * 2) + 1);
            r = min(n, (r * 2) + 2);
        }
    }

    cout << c << "\n";
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}