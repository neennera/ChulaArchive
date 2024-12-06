
#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT, MappedT, CompareT>::iterator CP::map_bst<KeyT, MappedT, CompareT>::recursive(node *n, CP::map_bst<KeyT, MappedT, CompareT>::iterator p, CP::map_bst<KeyT, MappedT, CompareT>::iterator q) const
{
    // You may need this function
    KeyT key = (n->data).first;
    KeyT a = (*p).first, b = (*q).first;
    if (mLess(b, key) && n->left != NULL)
    {
        return recursive(n->left, p, q);
    }
    if (mLess(key, a) && n->right != NULL)
    {
        return recursive(n->right, p, q);
    }
    return iterator(n);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
typename CP::map_bst<KeyT, MappedT, CompareT>::iterator CP::map_bst<KeyT, MappedT, CompareT>::lca(CP::map_bst<KeyT, MappedT, CompareT>::iterator p, CP::map_bst<KeyT, MappedT, CompareT>::iterator q) const
{
    // Write your code here
    auto a = p;
    auto b = q;
    if (mLess((*b).first, (*a).first))
    {
        std::swap(a, b);
    }
    return recursive(mRoot, a, b);
}

#endif
