#include "stack.h"
#include <iostream>
Stack::Stack(int n)
{
	size = n;
	pitems = new Item[n];
	top = 0;
}

Stack::Stack(const Stack& st)
{
	size = st.size;
	top = st.top;
	pitems = new Item[st.size];
	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	if (top <= 0)
	{
		return true;
	}
	return false;
}

bool Stack::isfull() const
{
	if (top >= size)
	{
		return true;
	}
	return false;
}

bool Stack::push(const Item& item)
{
	if (!isfull())
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item& item)
{
	if (isempty())
		return false;
	item = pitems[--top];
	return true;
}

Stack& Stack::operator=(const Stack& st)
{
	if (&st == this)
		return *this;
	delete[] pitems;
	pitems = new Item[st.size];
	for (int i = 0; i < size; i++)
	{
		pitems[i] = st.pitems[i];
	}
	size = st.size;
	top = st.top;
	return *this;
}

void Stack::show() const
{
	std::cout << "print stack's info: " << std::endl;
	for (int i = 0; i < top; i++)
	{
		std::cout << " " << pitems[i];
	}
	std::cout << std::endl;
}
