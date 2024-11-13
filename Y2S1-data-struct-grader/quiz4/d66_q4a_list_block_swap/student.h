#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"

template <typename T>
void CP::list<T>::block_swap(iterator a1, iterator a2, iterator b1, iterator b2)
{
	// write your code here
	if ((a1 == a2 && b1 == b2))
	{
		return;
	}
	if (a1 == a2)
	{
		a1 = a1.ptr->prev;
		auto b2_prev = b2.ptr->prev;
		b1.ptr->prev->next = b2.ptr;
		b2.ptr->prev = b1.ptr->prev;
		a1.ptr->next = b1.ptr;
		b1.ptr->prev = a1.ptr;
		b2_prev->next = a2.ptr;
		a2.ptr->prev = b2_prev;
		return;
	}
	if (b1 == b2)
	{
		b1 = b1.ptr->prev;
		auto a2_prev = a2.ptr->prev;
		a1.ptr->prev->next = a2.ptr;
		a2.ptr->prev = a1.ptr->prev;
		b1.ptr->next = a1.ptr;
		a1.ptr->prev = b1.ptr;
		a2_prev->next = b2.ptr;
		b2.ptr->prev = a2_prev;
		return;
	}
	auto t_b1_prev = b1.ptr->prev;
	auto t_a2_prev = a2.ptr->prev;
	a1.ptr->prev->next = b1.ptr;
	b1.ptr->prev = a1.ptr->prev;
	a2.ptr->prev = b2.ptr->prev;
	b2.ptr->prev->next = a2.ptr;
	t_b1_prev->next = a1.ptr;
	a1.ptr->prev = t_b1_prev;
	t_a2_prev->next = b2.ptr;
	b2.ptr->prev = t_a2_prev;
}

#endif
