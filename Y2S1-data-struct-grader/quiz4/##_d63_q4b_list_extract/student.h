#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output)
{
  // write your code here

  if (a.ptr == b.ptr)
    return;
  while (a.ptr != b.ptr)
  {
    // std::cout << a.ptr << " " << b.ptr << "\n";
    if (*a != value)
    {
      a = a.ptr->next;
      continue;
    }
    iterator t = a.ptr->next;
    a.ptr->prev->next = a.ptr->next;
    a.ptr->next->prev = a.ptr->prev;

    output.mHeader->next->prev = a.ptr;
    a.ptr->next = output.mHeader->next;
    a.ptr->prev = output.mHeader;
    output.mHeader->next = a.ptr;

    a = t;
    mSize--;
    output.mSize++;
  }
}

#endif
