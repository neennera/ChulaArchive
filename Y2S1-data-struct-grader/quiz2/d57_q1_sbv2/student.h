#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const
{
  // write your code here
  return v.size();
}

template <typename T>
const T &CP::stack<T>::top() const
{
  // write your code here
  return v[v.size() - 1];
}

template <typename T>
void CP::stack<T>::push(const T &element)
{
  // write your code here
  v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop()
{
  // write your code here
  v.resize(v.size() - 1);
}

template <typename T>
void CP::stack<T>::deep_push(const T &element, int depth)
{
  // write your code here
  int id = v.size() - depth;
  if (id == v.size())
  {
    v.push_back(element);
  }
  else
  {
    v.insert(v.begin() + id, element);
  }
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w)
{
  for (auto x : w)
  {
    v.push_back(x);
  }
}

template <typename T>
void CP::stack<T>::pop_until(const T &e)
{
  // write your code here
  int ct = v.size();
  while (ct > 0 && v[ct - 1] != e)
  {
    ct--;
  }

  v.resize(ct);
}

#endif
