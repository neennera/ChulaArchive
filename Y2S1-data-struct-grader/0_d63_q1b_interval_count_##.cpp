#include <bits/stdc++.h>
using namespace std;

int N, M, K, a;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> N >> M >> K;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    while (M--)
    {
        cin >> a;
        auto lit = lower_bound(v.begin(), v.end(), a - K);
        auto uit = upper_bound(v.begin(), v.end(), a + K);
        uit--;
        cout << max(0, int(uit - lit) + 1) << " ";
    }
}