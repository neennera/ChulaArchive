#include <stdexcept>
#include <assert.h>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "list.h"
#include "student.h"

int main()
{
  // std::ios_base::sync_with_stdio(0);
  // std::cin.tie(0);

  int n = 6,
      v = -1, a = 0, b = 5;
  // std::cin >> n >> v >> a >> b;
  CP::list<int> l;
  l.push_back(10);
  l.push_back(-1);
  l.push_back(30);
  l.push_back(-1);
  l.push_back(40);
  l.push_back(-1);
  // for (int j = 0; j < n; j++)
  // {
  //   int x;
  //   std::cin >> x;
  //   l.push_back(x);
  // }
  auto ai = l.begin();
  for (int j = 0; j < a; j++, ai++)
    ;
  auto bi = ai;
  for (int j = a; j < b; j++, bi++)
    ;

  CP::list<int> output;
  output.push_back(99);

  l.extract(v, ai, bi, output);

  // show output
  l.print();
  output.print();
}
