#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T, size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const
{
    std::map<T, int> m;
    for (int i = 0; i < mSize; i++)
    {
        m[mData[(mFront + i) % mCap]]++;
    }
    std::vector<std::pair<T, size_t>> ans;
    for (auto x : k)
    {
        ans.push_back(std::make_pair(x, m[x]));
    }
    return ans;
}

#endif
