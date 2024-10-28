#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include <map>
using namespace std;

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges)
{
  // Write code here
  map<int, int> m;
  for (auto [s, e] : ranges)
  {
    m[s - &mData[0]]++;
    m[e - &mData[0]]--;
  }
  T *t = new T[mSize]();
  int id = 0, ct = 0;
  for (int i = 0; i < mSize; i++)
  {
    ct += m[i];
    if (ct == 0)
    {
      t[id++] = mData[i];
    }
  }
  delete[] mData;
  mData = t;
  mCap = mSize;
  mSize = id;
}

#endif
