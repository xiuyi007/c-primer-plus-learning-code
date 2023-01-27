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
	//�����������˳��洢
	static const int SIZE = 10; //����ջ��С�ĳ���
	int top; //ջ��ָ��
	customer stack[SIZE];
};