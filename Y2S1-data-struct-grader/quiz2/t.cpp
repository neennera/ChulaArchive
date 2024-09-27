#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> v;
    v.insert(1);
    v.insert(2);
    v.insert(3);
    for (auto x : v)
    {

        for (auto g : v)
        {
            cout << " " << g;
        }
        cout << '\n';
        v.erase(x);
    }
    cout << "done";
}