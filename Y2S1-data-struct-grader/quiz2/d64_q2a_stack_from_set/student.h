#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

// DO NOT INCLUDE ANYTHING

template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first, typename std::set<T>::iterator last)
{
  // write your code ONLY here
  int N = 0;
  while (first != last)
  {
    N++;
    first++;
  }

  mSize = N;
  mCap = N;
  T *t = new T[N]();

  last--;
  for (int i = 0; i < N; i++)
  {
    t[i] = *last;
    last--;
  }

  mData = t;
}

#endif
