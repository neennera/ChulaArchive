#include <bits/stdc++.h>
using namespace std;

set<int> a, b;
int N, M, x;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        cin >> x;
        a.insert(x);
    }
    for (size_t i = 0; i < M; i++)
    {
        cin >> x;
        b.insert(x);
    }

    for (auto temp : a)
    {
        if (!(b.find(temp) == b.end()))
        {
            cout << temp << " ";
        }
    }
}