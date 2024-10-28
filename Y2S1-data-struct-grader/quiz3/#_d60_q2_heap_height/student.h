#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const
{
  // write your code here
  if (mSize <= 0)
    return -1;
  size_t h = 0;
  size_t c = 1;
  while (c < mSize)
  {
    h++;
    c += 2 * h;
  }
  return h;
}

#endif
