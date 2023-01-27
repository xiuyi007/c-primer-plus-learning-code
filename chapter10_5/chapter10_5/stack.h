#pragma once
#include "customer.h"
class Stack
{
public:
	Stack();
	~Stack();

	int push(const customer& elem);

	int pop();

	bool isEmpty();
	bool isFull();
private:
	//这里决定采用顺序存储
	static const int SIZE = 10; //定义栈大小的常量
	int top; //栈顶指针
	customer stack[SIZE];
};