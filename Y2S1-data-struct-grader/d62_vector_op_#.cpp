#include <bits/stdc++.h>
using namespace std;

vector<int> v;
string s;
int a, N;
int main()
{
    cin >> N;
    for (size_t i = 0; i < N; i++)
    {
        cin >> s;
        if (s == "pb")
        {
            cin >> a;
            v.push_back(a);
        }
        if (s == "sa")
        {
            sort(v.begin(), v.end());
        }
        if (s == "sd")
        {
            sort(v.begin(), v.end(), greater<int>());
        }
        if (s == "r")
        {
            reverse(v.begin(), v.end());
        }
        if (s == "d")
        {
            cin >> a;
            v.erase(v.begin() + a);
        }

        // cout << ">>>>>>> " << i << " : ";
        // for (auto a : v)
        // {
        //     cout << a << " ";
        // }
        // cout << "\n";
    }

    for (auto a : v)
    {
        cout << a << " ";
    }
}