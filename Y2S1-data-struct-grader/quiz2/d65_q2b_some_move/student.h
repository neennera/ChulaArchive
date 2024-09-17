#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value)
{
  // Your code here
  auto itt = lower_bound(aux.begin(), aux.end(), index);
  int i = itt - aux.begin(), j, n = 0, N = 0;
  if (i == 0)
  {
    j = index;
    N = (*itt) + value.size();
    n = *itt;
  }
  else
  {
    j = index - *(itt - 1);
    N = (*itt) + value.size();
    n = (*itt) - *(itt - 1);
  }
  auto it = &mData[i][0];
  vector<T> t(N);
  int ct = 0;
  for (int i = 0; i < n; i++)
  {
    if (i == j)
    {
      for (int k = 0; k < value.size(); k++)
      {
        t[ct++] = value[k];
      }
    }
    t[ct++] = *it;
    it++;
  }
  // delete[] mData[i];
  mData[i] = t;
}

#endif