#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other)
{
  // your code here

  int tmSize = mSize;
  int tCap = mCap;
  auto it = mData;

  mSize = other.mSize;
  mCap = other.mCap;
  mData = other.mData;
  other.mSize = tmSize;
  other.mCap = tCap;
  other.mData = it;
}

#endif
