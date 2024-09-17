#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  // write your code here
  int N = last - first + mSize;
  int pos = position - &mData[0];
  T *t = new T[N]();

  int ct = 0;
  for (size_t i = 0; i <= mSize; i++)
  {
    if (i == pos)
    {
      while (first != last)
      {
        t[ct++] = *first;
        first++;
      }
    }
    if (i == mSize)
    {
      continue;
    }
    t[ct++] = mData[i];
  }

  mData = t;
  mSize = N;
  mCap = N;
}

#endif