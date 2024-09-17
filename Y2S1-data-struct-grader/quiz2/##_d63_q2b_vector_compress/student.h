#include <bits/stdc++.h>
using namespace std;
#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress()
{
    // write your code here
    // cout << mSize;
    T *temp = new T[this->mSize]();
    for (int i = 0; i < this->mSize; i++)
    {
        temp[i] = this->mData[i];
    }

    this->mCap = this->mSize;
    delete[] this->mData;
    this->mData = temp;
}

#endif
