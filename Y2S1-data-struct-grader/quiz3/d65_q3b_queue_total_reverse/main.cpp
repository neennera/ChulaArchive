#include "queue.h"
#include "student.h"
#include <iostream>

int main()
{
  CP::queue<int> q;
  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i)
  {
    q.push(i);
  }
  q.reverse();
  q.push(n);
  CP::queue<int> t = q;
  while (!t.empty())
  {
    std::cout << t.front() << " ";
    t.pop();
  }
  std::cout << std::endl;
  q.reverse();
  t = q;
  while (!t.empty())
  {
    std::cout << t.front() << " ";
    t.pop();
  }
}