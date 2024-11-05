#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixUp(size_t idx)
{
    T tmp = mData[idx];
    while (idx > 0)
    {
        int p = (idx - 1) / 4;
        if (mLess(tmp, mData[p]))
            break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixDown(size_t idx)
{
    T tmp = mData[idx];
    while ((idx * 4) + 1 < mSize)
    {
        int c = (idx * 4) + 1;
        for (size_t i = 1; i <= 4; i++)
        {
            if ((idx * 4) + i >= mSize)
                break;
            if (mLess(mData[c], mData[(idx * 4) + i]))
                c = (idx * 4) + i;
        }
        if (mLess(mData[c], tmp))
            break;
        mData[idx] = mData[c];
        idx = c;
    }
    mData[idx] = tmp;
}

#endif
