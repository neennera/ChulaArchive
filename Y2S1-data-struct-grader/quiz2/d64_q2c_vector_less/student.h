#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const
{
  // write your code here
  //  if you use std::vector, your score will be half (grader will report score BEFORE halving)
  int sa = mSize, sb = other.mSize;
  auto a = &mData[0];
  auto b = &other.mData[0];
  bool c = false;

  while (sb != 0)
  {
    if (sa == 0 && sb > 0)
    {
      c = true;
      break;
    }
    else if (sa >= 1 && sb >= 1)
    {
      if (*a < *b)
      {
        c = true;
        break;
      }
      if (*a == *b)
      {
        --sa, --sb;
        a++, b++;
        continue;
      }
      else
      {
        break;
      }
    }
  }
  return c;
}
#endif
