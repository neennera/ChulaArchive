#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T, typename Comp>
T CP::priority_queue<T, Comp>::get_kth(size_t k) const
{
  if (k == 1)
    return mData[0];
  std::vector<T> t;
  int id = 0, c = 1;
  for (size_t i = 0; i < k; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (id >= mSize)
        break;
      t.push_back(mData[id++]);
    }
    c *= 2;
  }

  std::sort(t.rbegin(), t.rend(), mLess);
  return t[k - 1];
}

#endif
