#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  // WRITE YOUR CODE HERE
  // DON"T FORGET TO RETURN THE RESULT
  stack<int> s;

  for (auto [a, b] : v)
  {
    if (a == 1)
    {
      s.push(b);
    }
    else
    {
      int y = s.top();
      s.pop();
      int x = s.top();
      s.pop();
      if (b == 0)
      {
        s.push(x + y);
      }
      if (b == 1)
      {
        s.push(x - y);
      }
      if (b == 2)
      {
        s.push(x * y);
      }
      if (b == 3)
      {
        s.push(x / y);
      }
    }
    // cout << s.top();
  }

  return s.top();
}

#endif
