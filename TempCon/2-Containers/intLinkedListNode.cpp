#include "intLinkedList.h"
#include <cassert>

intLinkedList::intLinkedList() : head(nullptr) {

}

intLinkedList::~intLinkedList() {
	intLinkedListNode* iter = head;
	while (iter != nullptr) {
		intLinkedListNode* next = iter->next;
		delete iter;
		iter = next;
	}
}

void intLinkedList::append(int value) {
	intLinkedListNode* newNode = new intLinkedListNode;
	newNode->value = value;
	newNode->next = nullptr;

	if (head == nullptr) {
		head = newNode;
	}
	else {
		intLinkedListNode* iter = head;
		while (iter->next != nullptr) {
			iter = iter->next;
		}
		iter->next = newNode;
	}
}

int intLinkedList::at(int index) {
	assert(index >= 0);
	intLinkedListNode* iter = head;
	int iterationCount = 0;
	while (iterationCount != index && iter != nullptr) {
		iterationCount++;
		iter = iter->next;
	}

	assert(iter != nullptr);

	return iter->value;

	/*for (int i = 0; i < index; i++) {
		if (i > index) {
			break;
		}
		iter = iter->next;
	}
	return iter->value;*/
}

size_t intLinkedList::size() const {
	int retval = 0;
	intLinkedListNode* iter = head;
	while (iter != nullptr) 
	{
		retval++;
		iter = iter->next;
	}
	return retval;
}

void intLinkedList::erase(int index) 
{
	intLinkedListNode* nodeToDelete = new intLinkedListNode;
	//logic for finding the node at the index
	while (index == nodeToDelete) {

	}

	intLinkedListNode *temp = nodeToDelete;
	
	//the one before temp needs to point towards the temps next
	nodeBeforeTemp->next = temp->next;
	delete temp;

}



//void intLinkedList::append(int value) {
//	intLinkedListNode* newNode = new intLinkedListNode;
//}