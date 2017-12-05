#pragma once

class intLinkedList {
public:
	struct intLinkedListNode {
		int value;
		intLinkedListNode* next;
	};

	intLinkedList();
	~intLinkedList();

	void append(int value);

	int at(int index);

	size_t size() const;
	bool empty();
	int front();
	int back();

	void erase(int index);

private:
	intLinkedListNode* head;
};