#ifndef _CP_STUDENT_QUEUE_INCLUDED_
#define _CP_STUDENT_QUEUE_INCLUDED_

#include <stdexcept>
#include <iostream>
// #pragma once
#include <vector>
#include <queue>
#include "queue.h"

template <typename T>
std::vector<CP::queue<T>> CP::queue<T>::split_queue(int k)
{
    std::vector<CP::queue<T>> qs(k);
    for (int i = 0; i < mSize; i++)
    {
        qs[i % k].push(mData[(mFront + i) % mCap]);
    }
    T *t = new T[mSize]();
    delete[] mData;
    mData = t;
    mCap = mSize;
    mSize = 0;
    return qs;
}

#endif
