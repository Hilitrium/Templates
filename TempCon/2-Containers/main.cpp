#include "intvecter.h"
#include "tvector.h"
#include "test.h"
#include "intLinkedList.h"
#include <algorithm>
#include "algorithms.h"

int main() {
	tVector<int> nums;
	nums.append(0);
	nums.append(1);

	auto begin = nums.begin();
	auto end = nums.end();

	int total = addRange<iterator<tVector<int>>, int>(begin, end);

	/*intLinkedList nums;
	nums.append(1);
	nums.append(2);
	nums.append(3);
	nums.append(4);

	assertEqual(nums.at(2), 3);
	assertEqual(nums.at(7), 0);*/

	/*
	intVector nums;

	nums.append(1);
	nums.append(2);
	nums.append(3);
	nums.append(4);
	nums.append(5);

	//nums.erase(3);
	int howManyFours = nums.Count(4);
	nums.insert(2, 4);
	assertEqual(howManyFours, 1);
	nums.Reserve(50);
	assertEqual((int)nums.getCapacity(), 50);
	*/
	

	/*assertEqual<size_t>(nums.getCapacity(), 2);


	
	nums.append(1);
	nums.append(5);

	assertEqual<size_t>(nums.at(0), 1);
	assertEqual<size_t>(nums.at(1), 5);

	nums.append(33);

	assertEqual(nums.at(0), 1);
	assertEqual(nums.at(1), 5);
	assertEqual(nums.at(2), 33);
	assertEqual<size_t>(nums.getCapacity(), 4);
	assertEqual<size_t>(nums.getSize(), 3);
	assert<false>(nums.empty());
	assertEqual(nums.front(), 1);
	assertEqual(nums.back(), 33);
	assertEqual(nums.c_ptr(), &nums.at(0));*/
	
	
	while (true) {}
}