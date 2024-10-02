#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  std::vector<bool> dell(500001);
  for (auto x : pos)
  {
    dell[x] = true;
  }
  T *t = new T[mSize - pos.size()]();
  int id = 0, ct = 0;
  for (size_t i = 0; i < mSize; i++)
  {
    if (!dell[i])
    {
      t[id++] = mData[(mFront + i) % mCap];
    }
  }
  delete[] mData;
  mData = t;
  mSize = mSize - pos.size();
  mCap = mSize;
  mFront = 0;
}

#endif
