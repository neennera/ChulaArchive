void replace(const T &x, list<T> &y)
{
  // write your code here
  auto it = begin();
  while (it != end())
  {
    if (*it != x)
    {
      it++;
      continue;
    }
    for (auto yy : y)
    {
      insert(it, yy);
    }
    it = erase(it);
  }
}
