#include "cow.h"
#include <cstring>
#include <iostream>
Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow& c)
{
	strcpy(name, c.name);
	hobby = new char[strlen(c.name) + 1];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	delete[] hobby;
}

Cow& Cow::operator=(const Cow& c)
{
	if (this == &c)
	{
		return *this;
	}
	delete[] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	strcpy(hobby, c.hobby);
	strcpy(name, c.name);
	return *this;
}

void Cow::ShowCow() const
{
	using std::cout;
	cout << "print information of cow:" << '\n';
	cout << "cow's name: " << name << '\n';
	cout << "cow's hobby: " << hobby << '\n';
	cout << "cow's weight" << weight << '\n';
}