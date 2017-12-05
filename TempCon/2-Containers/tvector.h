#pragma once
#include <cassert>
#include <cstring>

template<typename T>
class tVector {
	T * data;
	size_t capacity; 
	size_t size;

	//bool grow(size_t minSize);

	T& operator[](size_t idx)
	{
		assert(size > 0);
		assert(idx > size - 1);
		return data[idx];
	}
	T operator[](size_t idx) const
	{
		assert(idx > size - 1);
		return data[idx];
	}

public:
	bool grow(size_t minSize) {
		assert(minSize <= 64000);

		if (minSize <= capacity) {
			return true;
		}

		while (capacity < minSize) {
			capacity *= 2;
		}

		T* newData = new int[capacity];
		memcpy(newData, data, sizeof(T) * size);

		delete[] data;

		data = newData;

		return true;
	}

	tVector() {
		capacity = 2;					// 1
		data = new T[capacity];
		size = 0;
	}
	~tVector() {						// 2
		delete[] data;
	}

	T& at(size_t idx) {
		assert(idx > 0);
		assert(idx < size);

		return data[idx]
	}
	T& append(T val) {
		if (size == capacity) {
			bool didgrow = grow(size + 1);
			assert(didgrow);
		}

		data[size] = val;
		++size;

		return data[size - 1];
	}

	T* c_ptr() const {
		return data;
	}

	size_t getCapacity() const {
		return capacity;
	}

	size_t getSize() const {
		return size;
	}

	bool empty() const {
		return size == 0;
	}

	T front() const {
		assert(size > 0);
		return data[0];
	}

	T back() const {
		assert(size > 0);
		return data[size - 1];
	}

	void pop() {
		assert(size > 0);
		size -= 1;
	}

	void clear() {
		size = 0;
	}

	void erase(size_t idx) {
		for (size_t i = idx; i < size; i++) {
			T temp = data[i];
			data[i] = data[i + 1];
			data[i + 1] = temp;
		}
		size--;
	}

	T count(T value) {
		T counter = 0;
		for (T i = 0; i < size; i++) {
			if (data[i] == value) {
				counter++;
			}
		}
		return counter;
	}

	void insert(size_t idx, T value) {
		assert(idx >= 0);
		assert(idx < size);

		append(value);

		for (size_t i = size; i >= idx; i--) {
			T temp = data[i];
			data[i] = data[i - 1];
			data[i - 1] = temp;
		}
	}

	void Reserve(size_t newCapacity) {
		if (newCapacity > capacity) {
			T *newData = new T[newCapacity];
			memcpy(newData, data, sizeof(T) * size);
			delete[] data;
			data = newData;
			capcity = newCapacity;
		}
	}
	
	void Compact() {
		if (capacity > size) {
			T * newData = new T[size];
			memcpy(newData, data, sizeof(T) * size);
			delete[] data;
			data = newData;
			capcity = size;
		}
	}

	/*T& operator[](size_t idx) {
		assert(size > 0);
		assert(idx > size - 1);
		return data[idx];
	}*/

	/*T operator[](size_t idx) const {
		assert(idx > size - 1);
		return data[idx];
	}*/
};

/*
template<typename T>						//workes the same as 1
tVector::tVector(){
	capacity = 2;
	data = new T[capacity];
	size = 0;
}
*/

/*tVector::~tVector() {						// works the same as 2
	delete[] data;
}*/
