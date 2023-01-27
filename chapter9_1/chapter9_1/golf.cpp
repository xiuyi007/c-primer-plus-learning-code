#include "golf.h"
#include <iostream>
void setgolf(golf& g, const char* name, int hc)
{
	using namespace std;

	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	if (g.fullname)
		return 1;
	return 0;
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	using namespace std;
	cout << "golf's full name is : " << g.fullname << endl;
	cout << "golf's hadicap is : " << g.handicap << endl;
}


