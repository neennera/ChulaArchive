#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, m, mSize = 0, mUse = 0;
    set<int> s;
    set<int> used;
    cin >> n >> m;
    while (m--)
    {
        int op, x;
        cin >> op >> x;
        if (op == 1)
        {

            mSize++;
            if (used.find(x) == used.end())
            {
                mUse++;
                used.insert(x);
            }

            s.insert(x);
        }
        if (op == 2)
        {
            if (s.find(x) != s.end())
            {
                s.erase(x);
                mSize--;
            }
        }
    }
    cout << mSize + 1 << " " << mUse + 1;
}