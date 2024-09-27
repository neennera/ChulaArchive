#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <bits/stdc++.h>

template <typename T>
void CP::stack<T>::multi_pop(size_t K)
{
  // write your code here
  int k = mSize - K;
  if (k < 0)
    mSize = 0;
  else
    mSize = k;
  mCap = mSize;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K)
{
  // write your code here
  //
  // don't forget to return an std::stack
  std::stack<T> s;

  int k = mSize - K;
  if (k < 0)
    k = 0;
  for (int i = k; i < mSize; i++)
  {
    s.push(mData[i]);
  }
  mSize = k;
  mCap = k;

  return s;
}

#endif
