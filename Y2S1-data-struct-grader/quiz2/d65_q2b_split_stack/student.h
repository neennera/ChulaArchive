#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::split_stack(int k) const
{
  // your code here
  // should return something
  std::vector<std::vector<T>> ans;
  ans.resize(k);
  int id = mSize - 1;

  for (int i = 0; i < mSize; i++)
  {
    ans[i % k].insert(ans[i % k].begin(), mData[id--]);
  }

  return ans;
}

#endif
