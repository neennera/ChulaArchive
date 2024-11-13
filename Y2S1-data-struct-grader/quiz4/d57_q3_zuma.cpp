#include <bits/stdc++.h>
using namespace std;

int N, K, V, a;
list<int> ll, lr;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> K >> V;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a;
        if (i < K)
        {
            ll.push_back(a);
        }
        else
        {
            lr.push_back(a);
        }
    }
    ll.push_back(V);
    auto ill = ll.rbegin();
    auto irr = lr.begin();
    while (ill != ll.rend() || irr != lr.end())
    {
        int ct = 0, color;
        if (ill != ll.rend())
        {
            color = *ill;
        }
        else
        {
            color = *irr;
        }
        auto till = ill;
        auto tirr = irr;
        while (till != ll.rend() && *till == color)
        {
            ct++;
            till++;
        }
        while (tirr != lr.end() && *tirr == color)
        {
            ct++;
            tirr++;
        }
        if (ct < 3)
            break;
        // cout << *ill << " " << *irr << "\n";

        ill = till;
        irr = tirr;
    }
    // cout << "***\n"
    //      << *ill << " " << *irr << "\n";

    auto it = ll.begin();
    while (ill != ll.rend())
    {
        cout << *it << " ";
        it++;
        ill++;
    }
    it = irr;
    while (it != lr.end())
    {
        cout << *it << " ";
        it++;
    }
}