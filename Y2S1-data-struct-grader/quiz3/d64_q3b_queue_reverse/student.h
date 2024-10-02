#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a, int b)
{

  for (size_t i = 0; i < (b - a + 1) / 2; i++)
  {
    T temp = mData[(mFront + b - i) % mCap];
    mData[(mFront + b - i) % mCap] = mData[(mFront + a + i) % mCap];
    mData[(mFront + a + i) % mCap] = temp;
  }
}

#endif
