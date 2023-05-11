#pragma once
#include "Person.h"
#include <iostream>
class Gunslinger :virtual public Person
{
public:
	Gunslinger() :Person(), sign_num(1) { };
	//枪手的拔枪时间
	double Draw();
	void show() const;
	void show_sign() const { std::cout << sign_num << std::endl; }

private:
	// 枪手枪上的刻痕数
	int sign_num;
};
