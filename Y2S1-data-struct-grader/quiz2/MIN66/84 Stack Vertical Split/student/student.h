#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const
{
  // Write code here
  int r = mSize / k;
  int m = mSize % k;
  output.resize(k);
  int id = 0;
  int g = 0;
  for (int i = 0; i < mSize;)
  {
    if (g < k - m && id == r)
    {
      id = 0;
      g++;
      continue;
    }
    else if (g >= k - m && id == r + 1)
    {
      id = 0;
      g++;
      continue;
    }
    output[g].push(mData[i++]);
    id++;
  }
}

#endif
