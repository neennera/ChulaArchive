#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second

int N, M, n[500000], v[50000];
multiset<int> all;

void getData()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < M; i++)
    {
        v[i] = 1;
        all.insert(1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        int old = v[a];
        if (n[i] > old) // if new one has more power in their team
        {
            v[a] = n[i];
            all.erase(all.find(old));
            all.insert(n[i]);
        }
        cout << *(all.begin()) << " ";
        }
    return 0;
}