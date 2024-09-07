#include <iostream>
#include <vector>
#include <map>
using namespace std;
void insert_into_sv(map<int, int> &v, int pos, int value)
{
    if (v.size() == 0)
    {
        v[pos] = value;
        return;
    }
    auto it = v.end();
    it--;
    while ((*it).first >= pos && it != v.begin())
    {
        v[(*it).first + 1] = (*it).second;
        auto t = it;
        it--;
        v.erase(t);
    }
    // insertion is not a begin of map & no duplicate pos
    if (it->first < pos)
    {
        v[pos] = value;
        return;
    }

    // insertion is a begin of map
    if (it->first == pos)
    {
        // duplicate pos
        v[pos + 1] = it->second;
        v[pos] = value;
    }
    else
    {
        // not duplicate pos
        v[it->first + 1] = it->second;
        v[pos] = value;
        v.erase(it);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    map<int, int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        insert_into_sv(v, a, b);
    }
    cout << v.size() << "\n";
    for (auto &x : v)
    {
        cout << x.first << ": " << x.second << "\n";
    }
}
