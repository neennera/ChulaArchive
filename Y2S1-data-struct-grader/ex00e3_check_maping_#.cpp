#include <bits/stdc++.h>
using namespace std;

int N, a, mm = INT_MAX, MM = INT_MIN;
set<int> s;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        s.insert(a);
        mm = min(mm, a);
        MM = max(MM, a);
    }

    if (s.size() == N && mm == 1 && MM == N)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}