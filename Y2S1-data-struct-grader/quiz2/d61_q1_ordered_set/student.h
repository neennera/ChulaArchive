#include <vector>
#include <map>
using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    map<T, bool> s;
    auto it = A.begin();
    while (it != A.end())
    {
        v.push_back(*it);
        s[*it] = true;
        it++;
    }
    it = B.begin();
    while (it != B.end())
    {
        auto t = A.begin();
        if (s.find(*it) == s.end())
        {
            v.push_back(*it);
            s[*it] = true;
        }
        it++;
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B)
{
    vector<T> v;
    map<T, bool> s;
    auto it = B.begin();
    while (it != B.end())
    {
        s[*it] = true;
        it++;
    }
    it = A.begin();
    while (it != A.end())
    {
        if (s.find(*it) != s.end())
        {
            v.push_back(*it);
            s[*it] = true;
        }
        it++;
    }

    return v;
}
