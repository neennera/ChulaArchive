#include <bits/stdc++.h>
using namespace std;

vector<int> v1, v2;
int N, M, a;
int main()
{
    cin >> N >> M;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a;
        v1.push_back(a);
    }
    for (size_t i = 0; i < M; i++)
    {
        cin >> a;
        v2.push_back(a);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    int i = 0, j = 0, old = -1;
    while (i < N && j < M)
    {
        if (v1[i] == v2[j] && v1[i] != old)
        {
            cout << v1[i] << " ";
            old = v1[i];
            i++;
            j++;

            continue;
        }

        if (v1[i] > v2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}