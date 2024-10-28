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
  set<pair<int, bool>> ss;
  for (auto [srit, erit] : ranges)
  {
    auto sit = srit - &mData[0];
    auto eit = erit - &mData[0];
    if (ss.lower_bound(make_pair(sit, 0)) == ss.end())
    {
      ss.insert({sit, 0});
      ss.insert({eit, 1});
      continue;
    }

    ss.insert({sit, 0});
    ss.insert({eit, 1});

    auto s = ss.lower_bound(make_pair(sit, 0));
    auto e = ss.upper_bound(make_pair(eit, 1));
    e--;
    auto it = s;
    it++;
    while (!(it == e))
    {
      it = ss.erase(it);
    }
  }

  int id = 0;

  auto it = ss.begin();
  for (int i = 0; i < mSize;)
  {
    if (i == (*it).first)
    {
      auto eit = it;
      while ((*eit).second != 1)
      {
        eit++;
      }
      auto teit = eit;
      teit++;
      while (teit != ss.end() && (*teit).second != 0)
      {
        teit++;
      }
      if (--teit == eit)
      {
        i += ((*eit).first - (*it).first);
      }
      else
      {
        i += ((*teit).first - (*it).first);
      }

      it = ++teit;
    }
    else
    {
      mData[id++] = mData[i++];
    }
  }
  mSize = id;
}

#endif
