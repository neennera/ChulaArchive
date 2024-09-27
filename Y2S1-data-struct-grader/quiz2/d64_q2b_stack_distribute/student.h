#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const
{
  // write your code here
  std::vector<std::vector<T>> t;
  t.resize(k);
  auto it = &mData[mSize - 1];
  int a = mSize / k;
  int b = mSize % k;
  for (int i = 0; i < k; i++)
  {
    for (int j = 0; j < a; j++)
    {
      t[i].push_back(*(it--));
    }
    if (i < b)
    {
      t[i].push_back(*(it--));
    }
  }
  return t;
}
#endif
