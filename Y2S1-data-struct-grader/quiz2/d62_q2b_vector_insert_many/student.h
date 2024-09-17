#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  // write your code here
  T *t = new T[mSize + data.size()]();
  sort(data.begin(), data.end());
  int ct = 0, c = 0;
  for (int i = 0; i < mSize + 1; i++)
  {
    if (i == data[c].first)
    {
      t[ct++] = data[c++].second;
    }
    if (i == mSize)
    {
      continue;
    }
    t[ct++] = mData[i];
  }
  delete[] mData;
  mData = t;
  mSize = mSize + data.size();
  mCap = mSize;
}

#endif
