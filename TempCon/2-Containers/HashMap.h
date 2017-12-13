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
	size_t hash(size_t key);
	void addHash(size_t key);
	void deleteHash(size_t Hash);
	void clearMap();
	size_t atHash(size_t hash);

private:
	tVector arr;
};

template<typename T>
inline hashMap<T>::hashMap() {
	capacity = 50;
	data = new T[capacity];
	size = 0;
}

template<typename T>
inline hashMap<T>::~hashMap() {
	delete[] data;
}

template<typename T>
inline size_t hashMap<T>::hash(size_t key) {
	size_t hash = key / 2;
	return hash;
}

template<typename T>
inline void hashMap<T>::addHash(size_t key) {
	size_t hash = hash(key);
	arr[hash] = key;
}

template<typename T>
inline void hashMap<T>::deleteHash(size_t Hash) {

}

template<typename T>
inline void hashMap<T>::clearMap() {
	size = 0;
}

template<typename T>
inline size_t hashMap<T>::atHash(size_t hash)
{
	return size_t();
}


