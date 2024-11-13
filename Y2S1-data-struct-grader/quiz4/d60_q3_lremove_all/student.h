#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <list>
template <typename T>
void CP::list<T>::remove_all(const T &value)
{
  // write your code here
  int ct = 0;
  auto it = mHeader->next;
  while (it != mHeader)
  {
    if (it->data != value)
    {
      it = it->next;
      continue;
    }
    node *tt = it;
    it->prev->next = it->next;
    it->next->prev = it->prev;
    ct++;
    it = it->next;
    delete tt;
  }
  mSize -= ct;
}

#endif
