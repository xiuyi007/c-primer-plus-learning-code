#pragma once
#include "Person.h"
class PokerPlayer :virtual public Person
{
public:
	PokerPlayer() :Person() { }
	//����һ��1-52������������ڱ�ʾ�˿��Ƶ�ֵ
	int Draw() const { return 1; }
};
