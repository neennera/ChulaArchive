#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const
{
    // write your code here
    int a = mCap - mSize;
    int b = other.mCap - other.mSize;
    if (a == b)
    {
        return 0;
    }
    return a > b ? 1 : -1;
}

#endif
