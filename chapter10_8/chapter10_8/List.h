#pragma once
typedef int ElemType;
class List
{
public:
	List();
	int isEmpty();
	int isFull();
	int addItem(ElemType item);
	void visit(void (*pf)(ElemType&)); //���б��е�ÿһ��Ԫ��ִ��ĳ�ֲ���,������ʹ���߸���
private:
	int top;
	//�����������ʵ�֣���˳��洢
	static const int MAX = 10;
	ElemType data[MAX];
};
