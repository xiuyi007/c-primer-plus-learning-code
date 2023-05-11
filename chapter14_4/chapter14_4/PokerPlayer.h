#pragma once
#include "Person.h"
class PokerPlayer :virtual public Person
{
public:
	PokerPlayer() :Person() { }
	//返回一个1-52的随机数，用于表示扑克牌的值
	int Draw() const { return 1; }
};
