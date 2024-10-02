#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const
{
  std::vector<T> res;
  int c = mSize < k ? mSize : k;
  for (int i = 0; i < c; i++)
  {
    res.push_back(mData[(mFront + i) % mCap]);
  }

  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to)
{
  // write your code only here
  auto it = from;
  mSize = to - from;
  mCap = mSize;
  T *t = new T[mSize]();
  int i = 0;
  while (it != to)
  {
    t[i++] = *it;
    it++;
  }
  mData = t;
  mFront = 0;
}

#endif
