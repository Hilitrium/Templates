//#include "tvector.h"
//#include <cassert>
//#include <cstring>
//
//template<typename t>
//inline T & tVector<t>::at(size_t idx)
//{
//	assert(idx > 0);
//	assert(idx < size);
//
//	return data[idx];
//}
//
//template<typename t>
//inline T & tVector<t>::append(T val)
//{
//	if (size == capacity) {
//		bool didgrow = grow(size + 1);
//		assert(didgrow);
//	}
//
//	data[size] = val;
//	++size;
//
//	return data[size - 1];
//}