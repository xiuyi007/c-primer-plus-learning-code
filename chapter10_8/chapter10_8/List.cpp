#include "List.h"
#include <iostream>

List::List() {
	top = 0;
	//����ĳ�ʼ�����Ժ��ԣ�������top'ָ��'�ı���
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


