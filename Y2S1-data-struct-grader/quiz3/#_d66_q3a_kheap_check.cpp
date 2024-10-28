#include <bits/stdc++.h>
using namespace std;

int M, a[50000];
bool check(int k, int n)
{
    int id = 0;
    while (true)
    {
        int c = (id * k) + 1;
        if (c >= n)
            return true;
        int mC = a[c];
        for (int i = 0; i < k; i++)
        {
            if (c + i >= n)
                break;
            mC = max(mC, a[c + i]);
        }

        if (mC >= a[id])
        {
            return false;
        }
        id++;
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> M;
    while (M--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (check(k, n))
        {
            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }
    }
}