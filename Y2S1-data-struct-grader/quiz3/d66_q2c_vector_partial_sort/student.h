#ifndef __STUDENT_H_
#define __STUDENT_H_

// can include anything
#include <bits/stdc++.h>
using namespace std;
template <typename T>
template <typename CompareT>

void CP::vector<T>::partial_sort(std::vector<iterator> &pos, CompareT comp)
{
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
  sort(pos.begin(), pos.end());
  vector<T> t;
  for (auto x : pos)
  {
    t.push_back(*x);
  }
  sort(t.begin(), t.end(), comp);
  auto it = pos.begin();
  for (auto x : t)
  {
    mData[*it - begin()] = x;
    it++;
  }
}

#endif
