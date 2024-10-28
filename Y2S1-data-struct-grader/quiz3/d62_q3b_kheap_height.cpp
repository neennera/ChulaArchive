#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, c, s = 1, h = 0;
    cin >> n >> k;
    c = k;
    if (k == 1)
    {
        cout << n - 1;
        return 0;
    }
    while (s < n)
    {
        s += c;
        c *= k;
        h++;
    }
    cout << h;
}