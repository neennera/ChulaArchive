#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  output.resize(k);
  int n = mSize / k;
  int q = mSize % k;
  int i = 0, id = 0, g = 0;
  for (int i = 0; i < mSize; i++)
  {
    output[g].push(mData[(mFront + i) % mCap]);
    id++;
    if ((g < q && id == n + 1) || (g >= q && id == n))
    {
      id = 0;
      g++;
    }
  }
}

#endif
