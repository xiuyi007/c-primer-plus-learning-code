#include "List.h"
#include <iostream>

List::List() {
	top = 0;
	//这里的初始化可以忽略，由于有top'指针'的保护
}

int List::isEmpty()
{
	if (top == 0) return 1;
	return 0;
}

int List::isFull()
{
	if (top >= MAX - 1) return 1;
	return 0;
}

int List::addItem(ElemType item)
{
	if (isFull()) return 0;
	data[top++] = item;
	return 1;
}

void List::visit(void(*pf)(ElemType&))
{
	for (int i = 0; i < top; i++)
	{
		(*pf)(data[i]);

	}
}


