#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second
int N, M, a, b, c;
vector<pair<int, int>> v;
void getData()
{
    cin >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    vector<pair<int, int>> q;
    vector<bool> ans(M, false);
    for (size_t i = 0; i < M; i++)
    {
        cin >> c;
        q.push_back(make_pair(c, i));
    }

    sort(q.begin(), q.end());

    int i = 0, j = 0;
    while (i < N && j < M)
    {

        if (q[j].ft >= v[i].ft && q[j].ft <= v[i].sd)
        {
            // cout << q[j].ft << " : " << v[i].ft << " " << v[i].sd << endl;
            ans[q[j].sd] = 1;
            j++;
        }
        else
        {
            if (v[i].ft > q[j].ft)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }

    for (size_t i = 0; i < M; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}