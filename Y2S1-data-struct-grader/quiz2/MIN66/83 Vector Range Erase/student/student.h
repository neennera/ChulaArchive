#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void CP::vector<T>::range_erase(std::vector<std::pair<iterator, iterator>> &ranges)
{
  // Write code here
  map<int, int> ss;
  for (auto [srit, erit] : ranges)
  {
    ss[srit - begin()] += 1;
    if (erit - begin() < mSize)
      ss[erit - begin()] -= 1;
  }
  int j = 0;
  int k = 0;
  for (int i = 0; i < mSize; i++)
  {
    k += ss[i];
    if (k == 0)
    {
      mData[j++] = mData[i];
    }
  }
  mSize = j;
}

#endif
