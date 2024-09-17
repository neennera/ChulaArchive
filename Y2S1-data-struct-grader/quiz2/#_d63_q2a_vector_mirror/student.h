#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{
  // write your code here
  T *temp = new T[this->mSize * 2]();
  for (size_t i = 0; i < mSize; i++)
  {
    temp[i] = temp[(mSize * 2) - i - 1] = this->mData[i];
  }
  delete this->mData;
  this->mData = temp;
  this->mSize = this->mSize * 2;
  this->mCap = this->mSize;
}

#endif
