#include <bits/stdc++.h>
using namespace std;

int N, M, L, a[100001];
string s;
set<string> ss;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);

    cin >> N >> M >> L;
    for (int i = 0; i < L; i++)
    {
        int t;
        cin >> t;
        a[i] = t % 26;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        string temp = "";
        for (int j = 0; j < L; j++)
        {
            int k = ((s[j] - int('a') - a[j]) + 26) % 26;
            temp += char(k + 'a');
        }
        ss.insert(temp);
    }
    while (M--)
    {
        cin >> s;
        auto it = ss.find(s);
        if (it != ss.end())
        {
            cout << "Match\n";
        }
        else
        {
            cout << "Unknown\n";
        }
    }
}
