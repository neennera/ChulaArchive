#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  std::vector<bool> d(500000);
  for (auto x : pos)
  {
    d[x] = 1;
  }
  T *t = new T[mSize - pos.size()];
  int id = 0;
  for (int i = 0; i < mSize; i++)
  {
    if (!d[i])
    {
      t[id++] = mData[(mFront + i) % mCap];
    }
  }
  mSize -= pos.size();
  mCap = mSize;
  mFront = 0;
  delete[] mData;
  mData = t;
}

#endif
