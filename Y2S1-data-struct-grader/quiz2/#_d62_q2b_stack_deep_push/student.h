#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos, const T &value)
{
  // write your code here
  int id = mSize - pos;
  ensureCapacity(mSize + 1);
  for (int i = mSize; i >= id; i--)
  {
    mData[i + 1] = mData[i];
  }
  mData[id] = value;
  mSize++;
}

#endif
