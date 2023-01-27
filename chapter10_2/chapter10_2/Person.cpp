#include "Person.h"
#include <iostream>
Person::Person(const std::string& ln, const char* fn)
{
	lname = ln;
	int i = 0;
	do
	{
		fname[i] = fn[i];
	} while (fn[i++] != '\0');
}

Person::~Person()
{
}

void Person::show() const
{
	using namespace std;
	cout << "lname: " << lname << endl;
	cout << "fname: " << fname << endl;
}
