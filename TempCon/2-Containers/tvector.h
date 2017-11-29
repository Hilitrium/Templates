#pragma once
#include <cassert>
#include <cstring>

template<typename T>
class tVector {
	T * data;
	size_t capacity; 
	size_t size;

public:
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
		return data[0];
	}

	T back() const {
		return data[size - 1];
	}

	void pop() {
		size -= 1;
	}

	void clear() {
		size = 0;
	}

	void erase(size_t idx) {
		for (T i = idx; i < size; i++) {
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

		for (T i = size; i >= idx; i--) {
			T temp = data[i];
			data[i] = data[i - 1];
			data[i - 1] = temp;
		}
	}

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
