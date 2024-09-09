#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second

int N, W, a[1000001], ans[1000001];

void getData()
{
    cin >> N >> W;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
}

multiset<int> v;
void med()
{

    if ((W + 1) % 2 == 0)
    {
        auto pa = v.begin();
        // 0000 = 4 => 1 , 2
        for (int i = 0; i < (W - 1) / 2; i++)
        {
            pa++;
        }
        int mm = *pa;
        int mmm = *(++pa);
        cout << int(((mm + mmm) + 1) / 2.0) << " ";
    }
    else
    {
        auto pa = v.begin();
        // 000 = 3 => 3/2 = 1
        for (int i = 0; i < W / 2; i++)
        {
            pa++;
        }
        cout << *pa << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    getData();
    for (int i = 0; i < W + 1; i++)
    {
        v.insert(a[i]);
    }

    if (N == W)
    {
        med();
    }

    for (int i = W + 1; i <= N; i++)
    {
        med();
        // cout << "is med in ";
        // for (auto it = v.begin(); it != v.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // cout << "\n-----------\n";

        auto it = v.begin();
        while (*it != a[i - W - 1])
        {
            it++;
        }
        v.erase(it);
        v.insert(a[i]);
    }

    return 0;
}