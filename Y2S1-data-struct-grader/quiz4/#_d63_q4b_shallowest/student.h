#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

// you can use this function
template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::shallowest_leaf(node *n)
{
  if (n == NULL)
    return -1;
  if (n->left == NULL)
    return shallowest_leaf(n->right) + 1;
  if (n->right == NULL)
    return shallowest_leaf(n->left) + 1;

  return std::min(shallowest_leaf(n->left) + 1, shallowest_leaf(n->right) + 1);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::shallowest_leaf()
{
  // write your code here
  return shallowest_leaf(mRoot);
}

#endif
