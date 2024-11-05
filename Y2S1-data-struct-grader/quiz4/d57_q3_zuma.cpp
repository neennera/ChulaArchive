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
            lr.push_front(a);
        }
    }
    ll.push_back(V);
    auto ill = ll.back();
    auto irr = lr.begin();
    while (!ll.empty() || !lr.empty())
    {
        if (ill != irr)
        {
            break;
        }
    }
}