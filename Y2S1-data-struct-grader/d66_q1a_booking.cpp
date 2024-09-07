#include <bits/stdc++.h>
using namespace std;

int N, M, c;
string f, s;
map<pair<string, string>, bool> m;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> f >> s;
        m[make_pair(f, s)] = 0;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> c;
        bool check = 1;
        vector<pair<string, string>> temp;
        for (int j = 0; j < c; j++)
        {

            cin >> f >> s;

            if (m.find(make_pair(f, s)) == m.end() || m[make_pair(f, s)] == 1)
            {
                check = 0;
            }
            else
            {
                temp.push_back(make_pair(f, s));
            }
        }
        if (check)
        {
            for (auto [ff, ss] : temp)
            {
                m[make_pair(ff, ss)] = 1;
            }
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}