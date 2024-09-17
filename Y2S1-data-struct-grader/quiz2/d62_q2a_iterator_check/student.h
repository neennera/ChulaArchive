#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const
{
  // write your code here
  bool ans = false;
  for (size_t i = 0; i < this->mSize; i++)
  {
    if (&(this->mData[i]) == it)
    {
      ans = true;
    }
  }

  return ans;
}

#endif
