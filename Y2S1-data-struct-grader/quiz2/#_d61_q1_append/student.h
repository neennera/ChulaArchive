#include "stack.h"
#include "queue.h"

namespace CP
{
    template <typename T>
    void stack<T>::appendStack(stack<T> s)
    {
        int n = s.size();
        T *t = new T[mSize + n]();
        for (int i = 0; i < n; i++)
        {
            t[i] = s.mData[i];
        }
        for (int i = n; i < n + mSize; i++)
        {
            t[i] = mData[i - n];
        }
        delete[] mData;
        mData = t;
        mSize += n;
        mCap = mSize;
    }

    template <typename T>
    void stack<T>::appendQueue(queue<T> q)
    {
        int n = q.size();
        T *t = new T[mSize + n]();
        for (int i = 0; i < n; i++)
        {
            t[i] = q.mData[q.size() - i - 1];
        }
        for (int i = n; i < n + mSize; i++)
        {
            t[i] = mData[i - n];
        }
        delete[] mData;
        mData = t;
        mSize += n;
        mCap = mSize;
    }

    template <typename T>
    void queue<T>::appendStack(stack<T> s)
    {
        int n = s.size();
        T *t = new T[mSize + n]();
        for (int i = 0; i < mSize; i++)
        {
            t[i] = mData[i];
        }
        for (int i = mSize; i < n + mSize; i++)
        {
            t[i] = s.mData[n - (i - mSize) - 1];
        }
        delete[] mData;
        mData = t;
        mSize += n;
        mCap = mSize;
    }

    template <typename T>
    void queue<T>::appendQueue(queue<T> q)
    {
        int n = q.size();
        T *t = new T[mSize + n]();
        for (int i = 0; i < mSize; i++)
        {
            t[i] = mData[i];
        }
        for (int i = mSize; i < n + mSize; i++)
        {
            t[i] = q.mData[i - mSize];
        }
        delete[] mData;
        mData = t;
        mSize += n;
        mCap = mSize;
    }
}
