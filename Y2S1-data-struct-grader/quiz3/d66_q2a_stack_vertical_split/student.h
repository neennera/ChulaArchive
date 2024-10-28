#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const
{
  // Write code here
  int h = mSize / k;
  int m = mSize % k;
  int id = 0;
  output.resize(k);
  for (int i = k - 1; i >= 0; i--)
  {
    for (int j = 0; j < h + ((i) < m); j++)
    {
      output[i].push(mData[id++]);
    }
  }
}

#endif
