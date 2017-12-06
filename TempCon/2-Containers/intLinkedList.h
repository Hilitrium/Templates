#pragma once

class intLinkedList {
public:
	struct intLinkedListNode {
		int value;
		intLinkedListNode* next;
		intLinkedListNode* prev;
	};

	intLinkedList();
	intLinkedList(const intLinkedList& other);

	~intLinkedList();

	void append(int value);

	int at(int index);

	size_t size() const;
	bool empty();
	int front();
	int back();

	void erase(size_t idx);
	void clear();
	int count(int value);
	void insert(size_t idx, int value);

private:
	intLinkedListNode* head;
};