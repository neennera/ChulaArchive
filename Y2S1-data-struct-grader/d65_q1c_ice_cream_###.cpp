#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second

vector<pair<int, int>> s;
int N, M, a, b;

void getData()
{
    cin >> N >> M >> b;
    s.push_back(make_pair(0, b));
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        s.push_back(make_pair(a, b));
    }
    sort(s.begin(), s.end());
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    for (int i = 0; i < M; i++)
    {
        int p, x;
        cin >> p >> x;
    }

    return 0;
}
