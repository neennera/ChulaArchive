#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
bool CP::list<T>::check()
{
  // your code here
  node *a = mHeader;
  node *b = mHeader->next;
  for (size_t i = 0; i < mSize; i++)
  {
    if (a == NULL || b == NULL)
      return false;
    if (a->next != b || b->prev != a)
      return false;
    a = a->next;
    b = b->next;
  }

  if (a == NULL || b == NULL || a != mHeader->prev || b != mHeader)
    return false;
  return true;
}

#endif
