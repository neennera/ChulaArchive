#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos)
{
  // write your code here
  T *t = new T[mSize - pos.size()]();
  auto it = pos.begin();
  int ct = 0;
  for (int i = 0; i < mSize; i++)
  {
    if (it != pos.end() && i == *it)
    {
      it++;
    }
    else
    {
      t[ct++] = this->mData[i];
    }
  }
  delete[] mData;
  mData = t;
  mSize = ct;
  mCap = ct;
}

#endif
