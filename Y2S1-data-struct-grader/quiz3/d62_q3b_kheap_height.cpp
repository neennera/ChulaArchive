#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, c = 1, id = 0, l = 0;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n - 1;
        return 0;
    }
    while (id < n)
    {
        l++;
        id += c;
        c = c * k;
    }
    cout << l - 1;
}