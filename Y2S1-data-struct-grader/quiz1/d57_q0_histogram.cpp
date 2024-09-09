#include <bits/stdc++.h>
using namespace std;

int N;
string s;
map<string, int> m;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        cin >> s;
        m[s]++;
    }

    for (auto [s, i] : m)
    {
        if (i > 1)
        {
            cout << s << " " << i << "\n";
        }
    }
}