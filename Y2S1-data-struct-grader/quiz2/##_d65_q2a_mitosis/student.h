#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    // 1 2 3 4 5 6
    // 1 3 : 1 2 3 3 4 4 5 5 6
    // 2 5 : 1 2 3 3 3 4 4 4 4 5 5 5 6
    int old = mSize;
    if (mSize + (b - a + 1) >= mCap)
    {
        expand(mSize * 2);
    }
    mSize += (b - a + 1);

    for (int i = 0; i < a; i++)
    {
        mData[mSize - i - 1] = mData[old - i - 1];
    }
    int id = mSize - a - 1;
    for (int i = a; i <= b; i++)
    {
        mData[id--] = mData[old - i - 1];
        mData[id--] = mData[old - i - 1];
    }
}

#endif