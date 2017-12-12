#pragma once
#include <map>
#include <iostream>
#include <cassert>
#include "tvector.h"

template <typename T>
class hashMap {
	size_t capacity;
	size_t size;

	T * data;
public:
	hashMap();
	~hashMap();

private:
	tVector arr;
};

template<typename T>
inline hashMap<T>::hashMap() {
	capacity = 50;
	data = new T[capacity];
}
