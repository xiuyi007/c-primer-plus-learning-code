#pragma once
#include "Person.h"
#include <iostream>
class Gunslinger :virtual public Person
{
public:
	Gunslinger() :Person(), sign_num(1) { };
	//ǹ�ֵİ�ǹʱ��
	double Draw();
	void show() const;
	void show_sign() const { std::cout << sign_num << std::endl; }

private:
	// ǹ��ǹ�ϵĿ̺���
	int sign_num;
};
