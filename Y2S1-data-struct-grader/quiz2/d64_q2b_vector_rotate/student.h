#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k)
{
  // write your code here
  int N = last - first;
  T *t = new T[last - first]();
  for (size_t i = 0; i < N; i++)
  {
    t[i] = *(first + i);
  }
  int i = 0;
  while (first != last)
  {
    *first = t[(i + k) % N];
    i++;
    first++;
  }
  delete[] t;
}

#endif

// XXAAAAXX