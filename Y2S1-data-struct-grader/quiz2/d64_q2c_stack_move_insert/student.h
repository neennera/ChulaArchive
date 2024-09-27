#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  // your code here
  if (m > s2.size())
    m = s2.size();
  int old = mSize;
  expand(mSize + m);
  mSize += m;
  for (int i = 0; i < k; i++)
  {
    mData[mSize - i - 1] = mData[old - i - 1];
  }
  for (int i = 0; i < m; i++)
  {
    mData[mSize - k - i - 1] = s2.mData[s2.size() - i - 1];
  }
  s2.mSize = s2.mSize - m;
}
#endif
