#include <bits/stdc++.h>
using namespace std;

void t(vector<char> &c, string in)
{
    vector<char> v;
    if (in.length() < 2)
        return;
    auto it = c.begin();
    while (it != c.end())
    {
        int ct = 0;

        if (*it == in[0])
        {
            while (ct < in.length() && it != c.end() && *it == in[ct])
            {
                it++;
                ct++;
            }
            if (ct == in.length())
            {
                continue;
            }
            else
            {

                it = it - ct;
            }
        }
        v.push_back(*it);
        it++;
    }
    c = v;
}

int main()
{
    vector<char> c;
    c.push_back('S');
    c.push_back('a');
    c.push_back('m');
    c.push_back('I');
    c.push_back('a');
    c.push_back('m');
    c.push_back('a');
    c.push_back('a');
    c.push_back('m');
    c.push_back('m');
    string s = "am";

    t(c, s);
    for (auto x : c)
    {
        cout << x << ' ';
    }
}