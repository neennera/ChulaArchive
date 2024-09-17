#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  // write your code here
  if (m == 0)
  {
    return false;
  }
  if ((a <= b && a + m > b) || (b <= a && b + m > a))
  {
    // printf("%d %d %d ", a, a + m, b);
    // printf("colab\n");
    return false;
  }
  if (!(a >= mData && a + m <= (mData + mSize)))
  {
    // printf("A out of bound\n");
    return false;
  }
  if (!(b >= mData && b + m <= (mData + mSize)))
  {
    // printf("B out of bound\n");
    return false;
  }
  for (size_t i = 0; i < m; i++)
  {
    T temp = *a;
    *a = *b;
    *b = temp;
    a++;
    b++;
  }

  return true;
}

#endif
