#include "cd.h"
#include <cstring>
#include <iostream>
Cd::Cd()
{
	performers = nullptr;
	label = nullptr;
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	using std::cout;
	delete[] performers;
	delete[] label;
}

Cd::Cd(const Cd& d)
{
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s1) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

void Cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "info: " << endl;
	cout << "performers: " << performers << endl;
	cout << "label: " << label << endl;
	cout << "selections: " << selections << endl;
	cout << "playtime: " << playtime << endl;
}

Cd& Cd::operator=(const Cd& d)
{
	if (this == &d)
	{
		return *this;
	}
	delete[] performers;
	performers = new char[strlen(d.performers) + 1];
	strcpy(performers, d.performers);
	delete[] label;
	label = new char[strlen(d.label) + 1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char* s1, const char* s2, const char* s3, int n, double x):Cd(s2, s3, n, x)
{
	work = new char[strlen(s1) + 1];
	strcpy(work, s1);
}

Classic::Classic() :Cd()
{
	work = nullptr;
}
Classic& Classic::operator=(const Classic& obj)
{
	if (this == &obj) return *this;
	delete[] work;
	work = new char[strlen(obj.work) + 1];
	strcpy(work, obj.work);
	Cd::operator=(obj);
	return *this;
}

void Classic::Report() const
{
	Cd::Report();
	using std::cout;
	cout << "main work: " << work << std::endl;
}

Classic::Classic(const Classic& obj):Cd(obj)
{
	work = new char[strlen(obj.work) + 1];
	strcpy(work, obj.work);
}

Classic::~Classic()
{
	delete[] work;
}