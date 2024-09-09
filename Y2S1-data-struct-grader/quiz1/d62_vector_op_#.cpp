#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int N, a;
string s;

int main()
{
    // ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N;
    while (N--)
    {
        cin >> s;
        if (s == "pb")
        {
            cin >> a;
            v.push_back(a);
        }
        else if (s == "sa")
        {
            sort(v.begin(), v.end());
        }
        else if (s == "sd")
        {
            sort(v.begin(), v.end(), greater<int>());
        }
        else if (s == "r")
        {
            reverse(v.begin(), v.end());
        }
        else
        {
            cin >> a;
            v.erase(v.begin() + a);
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}