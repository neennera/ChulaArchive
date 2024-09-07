#include <bits/stdc++.h>
using namespace std;

int N, M;
int a, b, r;
map<int, int> c;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    cin >> N >> M;
    int win_round = M + 1;
    for (size_t i = 0; i < N; i++)
    {
        cin >> a;
        c[a]++;
    }
    // sort(c.begin(), c.end());
    for (size_t i = 0; i < M; i++)
    {

        bool win = true;
        cin >> r;
        for (size_t j = 0; j < r; j++)
        {
            cin >> b;
            if (!win || win_round != M + 1)
            {
                continue;
            }
            auto it = c.upper_bound(b);
            if (it == c.end() || (*it).second <= 0)
            {
                win = false;
            }
            else
            {
                (*it).second--;
                if ((*it).second == 0)
                {
                    c.erase(it);
                }
            }
        }
        if (!win)
        {
            win_round = i + 1;
        }
    }
    cout << win_round;
}