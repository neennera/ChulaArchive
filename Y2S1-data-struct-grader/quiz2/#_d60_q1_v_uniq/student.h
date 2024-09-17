#ifndef __STUDENT_H_
#define __STUDENT_H_

// you can include any other file here
// you are allow to use any data structure
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void CP::vector<T>::uniq()
{
  // do someting here
  set<T> s;
  T *temp = new T[mSize]();
  int ct = 0;
  for (int i = 0; i < this->mSize; i++)
  {
    if (s.find(this->mData[i]) == s.end())
    {
      s.insert(this->mData[i]);
      temp[ct++] = this->mData[i];
    }
  }
  delete[] this->mData;
  this->mData = temp;
  this->mSize = ct;
}

#endif
