#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos, Comp comp) const
{
  // your code here
  T ans;
  std::sort(pos.begin(), pos.end());
  for (int i = 0; i < pos.size(); i++)
  {
    if (pos[i] >= mSize)
      break;
    T data = mData[(mFront + pos[i]) % mCap];
    if (i == 0)
    {
      ans = data;
    }
    if (comp(data, ans))
    {
      ans = data;
    }
  }

  // should return something
  return ans;
}

#endif
