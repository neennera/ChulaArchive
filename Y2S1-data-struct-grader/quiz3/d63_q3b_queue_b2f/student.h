#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::back_to_front()
{
  // write your code here
  if (mSize == 0)
    return;
  mData[(mFront - 1 + mCap) % mCap] = mData[(mFront + mSize - 1) % mCap];
  mFront -= 1;
}

#endif
