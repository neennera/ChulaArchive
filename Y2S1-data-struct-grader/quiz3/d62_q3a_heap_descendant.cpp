#include <bits/stdc++.h>
using namespace std;

int a, n;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n >> a;
    int l = a, r = a, c = 0;
    queue<int> q;

    while (1)
    {
        for (int i = l; i <= r; i++)
        {
            q.push(i);
            c++;
        }
        if ((l * 2) + 1 >= n)
            break;
        l = (l * 2) + 1;
        r = min(n - 1, (r * 2) + 2);
    }
    cout << c << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}