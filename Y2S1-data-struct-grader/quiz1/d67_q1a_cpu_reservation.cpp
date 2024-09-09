#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ft first
#define sd second

int N, M;
ll a, b;
vector<int> ans;
set<pair<ll, bool>> s;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        bool ch = true;
        if (i == 0)
        {
            s.insert({a, 0});
            s.insert({b, 1});
            ans.push_back(1);
            continue;
        }
        if (s.find({a, 0}) != s.end() || s.find({b, 0}) != s.end() || s.find({a, 1}) != s.end() || s.find({b, 1}) != s.end())
        {
            ch = 0;
        }
        else if (a == b)
        {
            s.insert({a, 0});
            s.insert({b, 1});
            auto it = s.find({b, 1});
            auto t2 = ++it;
            if (t2 != s.end() && t2->second == 1)
            {
                ch = 0;
                s.erase({b, 1});
                s.erase({a, 0});
            }
        }
        else
        {
            s.insert({a, 0});
            s.insert({b, 1});
            auto it1 = s.find({a, 0});
            auto it2 = s.find({b, 1});
            auto t1 = it1;
            t1++;

            if (t1 != it2)
            {
                // cout << a<<" "<< b << " something in middle\n";
                ch = 0;
                s.erase(it1);
                s.erase(it2);
            }
            else
            {
                auto t2 = it2;
                t2++;
                if (t2 != s.end() && t2->second == 1)
                {
                    // cout << a << " " << b << "I am between\n";
                    ch = 0;
                    s.erase(it1);
                    s.erase(it2);
                }
            }
        }
        if (ch)
        {
            ans.push_back(i + 1);
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}
