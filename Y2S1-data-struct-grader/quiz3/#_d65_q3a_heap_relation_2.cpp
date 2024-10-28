#include <bits/stdc++.h>
using namespace std;

int relation(long long S, long long a, long long b)
{
    long long aa, bb;

    // a is ansestor of b
    bb = b;
    bool fa = 1;
    while (bb > a)
    {
        if ((bb - 1) / S == a)
        {
            if (fa)
            {
                return 1;
            }
            return 2;
        }
        if (bb == 0)
            break;
        bb = (bb - 1) / S;
        fa = 0;
    }

    // b is ansestor of a
    aa = a;
    fa = 1;
    while (aa > b)
    {
        if ((aa - 1) / S == b)
        {
            if (fa)
            {
                return 1;
            }
            return 2;
        }
        if (aa == 0)
            break;
        aa = (aa - 1) / S;
        fa = 0;
    }

    int ha = 0, hb = 0;
    aa = a, bb = b;
    while (aa != 0)
    {
        ha++;
        aa = (aa - 1) / S;
    }
    while (bb != 0)
    {
        hb++;
        bb = (bb - 1) / S;
    }
    if (ha == hb)
    {
        return 4;
    }
    return 3;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long S, a, b;
    cin >> n;
    while (n--)
    {
        cin >> S >> a >> b;
        cout << relation(S, a, b) << " ";
    }
    cout << endl;
}