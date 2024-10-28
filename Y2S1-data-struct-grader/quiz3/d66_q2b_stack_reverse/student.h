#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last)
{
	// write your code here
	if (first > mSize || first >= last)
		return;
	int l = last;
	if (last > mSize)
		l = mSize - 1;
	for (int i = 0; i < (l - first + 1) / 2; i++)
	{
		T temp = mData[mSize - 1 - l + i];
		mData[mSize - 1 - l + i] = mData[mSize - 1 - first - i];
		mData[mSize - 1 - first - i] = temp;
	}
}

#endif
