#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const
{
  // your code here
  for (int i = 0; i < mSize; i++)
  {
    if (mData[i] == k)
      return true;
  }
  return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const
{
  // your code here
  int id = -1;
  for (int i = 0; i < mSize; i++)
  {
    if (mData[i] == k)
      id = i;
  }
  if (id == -1)
    return -1;

  int ct = 0;
  int t = 1;
  while (t <= id)
  {
    // printf("t %d id %d\n", t, id);
    ct++;
    t |= 1 << ct;
  }
  return ct;
}

#endif
