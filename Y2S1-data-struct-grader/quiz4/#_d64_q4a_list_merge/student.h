#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls)
{
  // write your code here
  for (auto it = ls.begin(); it != ls.end(); it++)
  {
    if (it->mSize == 0)
      continue;
    // this is a circular list with header
    mHeader->prev->next = it->mHeader->next; // push_back it->1 to this->last->next
    it->mHeader->next->prev = mHeader->prev; // do a prev for above
    it->mHeader->next = it->mHeader;         // no node in it any more, cut the next link

    mHeader->prev = it->mHeader->prev; // set this->last =  it->last
    it->mHeader->prev->next = mHeader; // do a next for above
    it->mHeader->prev = it->mHeader;   // no node in it any more, cut the prev link

    mSize += it->mSize;
    it->mSize = 0;
  }
}

#endif
