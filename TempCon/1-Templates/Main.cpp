#include <iostream>
#include "test.h"
class Person {
public:
	std::string name;
	int age;
	float height;
};
/*int add(int a, int b) {
	return a + b;
}

float add(float a, float b) {
	return a + b;
}

template<typename T>
T sub(T a, T b) {
	return a - b;
}*/

//closed
//1
template<typename P>
P print(P a) {
	std::cout << a << std::endl;
	return 0;
}

//2
template<typename Min>
Min min(Min a, Min b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}

template<typename Max>
Max max(Max a, Max b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

template<typename C>
C clamp(C a, C b, C c) {
	int max = 0;
	int min = 0;

	if (b > c) {
		max = b;
		min = c;
	}
	else {
		max = c;
		min = b;
	}

	if (a > max) {
		a = max;
		return a;
	}
	else if (a < min) {
		a = min;
		return a;
	}
	else {
		return a;
	}
}

//3
//template<typename Pr>
//Pr printN(Pr value) {
//	std::cout << value;
//}
//
//template<>
//void printN(Person value) {
//	std::cout << value.name << std::endl;
//	std::cout << value.age << std::endl;
//	std::cout << value.height << std::endl;
//}

//open
//1
template<typename S>
void swap(S& a, S& b) {
	S temp = a;
	a = b;
	b = temp;
}

//2


int main() {
	/*int v1 = add(5, 2);
	float v2 = add(2.1f, 3.2f);

	int s1 = sub(1, 1);
	float s2 = sub(2.5f, 1.1f);
	int s3 = sub<int>(1, 2.0f);*/
	Person theKob;
	theKob.name = "Kobington";
	theKob.age = 19;
	theKob.height = 170.18;

	//closed
	//1
	int p1 = print(1);
	float p2 = print(1.2f);
	bool p3 = print(true);

	//2
	int m1 = min(2, 7);
	int m2 = max(2, 4);
	int c1 = clamp(20, 5, 10);

	//open
	//1
	int thing = 5;
	int fwoob = 7;
	swap(thing, fwoob);

	double dinosaur = 1.1f;
	double hotdog = 2.3f;
	swap(dinosaur, hotdog);

	//2
	assert<true>(5 == 5);
	assertEqual(5, 4);
	while (true) {}
	return 0;
}