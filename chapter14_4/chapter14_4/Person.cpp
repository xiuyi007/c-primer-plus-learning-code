#include "Person.h"
#include <iostream>
void Person::show() const
{
	std::cout << "the name is : " << name << std::endl;
	std::cout << "the head_name is :" << head_name << std::endl;
}
