#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check()
{
  // Your code here
  // Return something
  for (int i = 0; i < mSize; i++)
  {
    int c = (i * 2) + 1;
    if (c >= mSize)
      break;
    if (!mLess(mData[c], mData[i]))
      return 0;
    if (c + 1 < mSize && !mLess(mData[c + 1], mData[i]))
      return 0;
  }

  return 1;
}

#endif