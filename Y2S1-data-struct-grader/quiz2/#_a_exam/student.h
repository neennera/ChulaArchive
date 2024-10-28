#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
    // your code here
    int K = std::min(k, int(mSize));
    int M = std::min(m, int(s2.mSize));
    int id = 0;
    T *t = new T[mSize + M]();
    for (int i = 0; i <= mSize; i++)
    {
        if (mSize - k == i)
        {
            for (int i = 0; i < M; i++)
            {
                t[id++] = s2.mData[s2.mSize - M + i];
            }
        }
        if (i < mSize)
            t[id++] = mData[i];
    }
    delete[] mData;
    mData = t;
    mSize += M;
    mCap = mSize;
    s2.mSize -= M;
}
#endif
