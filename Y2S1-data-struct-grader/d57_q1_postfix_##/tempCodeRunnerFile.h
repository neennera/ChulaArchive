#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int eval_postfix(vector<pair<int, int>> v)
{
  // WRITE YOUR CODE HERE
  // DON"T FORGET TO RETURN THE RESULT
  stack<int> op; // + - * /
  stack<int> num;

  for (int i = v.size() - 1; i >= 0; i--)
  {
    if (v[i].first == 1)
    {
      num.push(v[i].second);
    }
    else
    {
      op.push(v[i].second);
    }
  }
  // num : 2 3 7
  // op : 2 3
  int ans = num.top();
  num.pop();
  while (!op.empty())
  {

    int opp = op.top();
    op.pop();
    int numm = num.top();
    num.pop();
    if (opp == 0)
    {
      ans = ans + numm;
    }
    if (opp == 1)
    {
      ans = ans - numm;
    }
    if (opp == 2)
    {
      ans = ans * numm;
    }
    if (opp == 3)
    {
      ans = ans / numm;
    }
  }

  return ans;
}

#endif
