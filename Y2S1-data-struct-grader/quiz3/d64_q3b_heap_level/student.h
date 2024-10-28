#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

#include <bits/stdc++.h>
using namespace std;
template <typename T, typename Comp>
std::vector<T> CP::priority_queue<T, Comp>::at_level(size_t k) const
{
  // write your code here
  // can include anything
  std::vector<T> r;
  int id = 0, c = 0;
  while (c < k)
  {

    id += pow(2, c);
    c++;
    // cout << "id " << id << endl;
  }
  int upper = id + pow(2, c);
  // cout << "id " << id << " upper" << upper << endl;
  while (id < mSize && id < upper)
  {
    r.push_back(mData[id]);
    id++;
  }
  sort(r.begin(), r.end(), mLess);
  reverse(r.begin(), r.end());
  return r;
}

#endif
