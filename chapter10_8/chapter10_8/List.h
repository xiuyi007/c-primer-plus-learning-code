#pragma once
typedef int ElemType;
class List
{
public:
	List();
	int isEmpty();
	int isFull();
	int addItem(ElemType item);
	void visit(void (*pf)(ElemType&)); //对列表中的每一个元素执行某种操作,操作由使用者给出
private:
	int top;
	//这里采用数组实现，即顺序存储
	static const int MAX = 10;
	ElemType data[MAX];
};
