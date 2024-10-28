#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
  // write your code here
  if (mSize == 0 || a == b)
    return a;
  b--;
  iterator ans = a;
  while (a != b)
  {
    T temp = *a;
    *a = *b;
    *b = temp;
    a++;
    if (a == b)
      break;
    b--;
  }

  return ans;
}

#endif
