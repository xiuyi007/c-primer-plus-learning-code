#pragma once
#include "customer.h"
typedef Customer Item;
class Queue
{
public:
	Queue(int size = MAXSIZE);
	bool dequeue(Item& item);
	bool enqueue(const Item& item);
	int count() const;
	bool isempty() const;
	bool isfull() const;
	~Queue();

private:
	struct Node
	{
		Item item;
		Node* next;
	};
	static const int MAXSIZE = 10;
	Node* front;
	Node* rear;
	int items;
	const int qsize;
	//Ϊ�˷��㣬��ֹ���ø�ֵ�͸��ƹ���
	Queue(const Queue& obj):qsize(0) {};
	Queue& operator=(Queue& obj) { return *this; };
};
