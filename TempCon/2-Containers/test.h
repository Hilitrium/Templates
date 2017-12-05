#pragma once
#include<cstdlib>

template<bool exp>
void Myassert(bool cond) 
{
	if (cond == exp) {
		return;
	}
	abort();
}

template<typename T>
void assertEqual(T a, T b)
{
	if (a == b) {
		return;
	}
	abort();
}