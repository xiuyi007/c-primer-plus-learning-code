#pragma once
#include <iostream>
class T1
{
public:
	virtual void show() { std::cout << "this is T1" << std::endl; }
};

class T2
{
public:
	virtual void show() { std::cout << "this is T2" << std::endl; }
};

class T3 :public T1, public T2
{

};
