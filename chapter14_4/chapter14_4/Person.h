#pragma once
#include <string>
class Person
{
public:
	Person() { name = ""; head_name = ""; }
	virtual void show() const;

private:
	std::string name;
	std::string head_name;
};
