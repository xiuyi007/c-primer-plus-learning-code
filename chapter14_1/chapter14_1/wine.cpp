#include "wine.h"
#include <iostream>
Wine::Wine() :a(), label()
{
	year = -1;
}

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) :a(ArrayInt(yr, y), ArrayInt(bot, y))
{
	label = l;
	year = y;
}

Wine::Wine(const char* l, int y) :a()
{
	label = l;
	year = y;
}

void Wine::GetBottles()
{
	using std::cout;
	ArrayInt list(this->year);
	ArrayInt l(this->year);
	for (int i = 0; i < this->year; i++)
	{
		cout << "Enter year: ";
		std::cin >> list[i];
		cout << "\nEnter bottles for that year: ";
		std::cin >> l[i];
	}
	a.setFirst(list);
	a.setSecond(l);
}

const std::string& Wine::Label() const
{
	return label;
}

int Wine::sum() const
{
	return a.second().sum();
}
