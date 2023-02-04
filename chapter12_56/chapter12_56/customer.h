#pragma once
#include <cstdlib>
class Customer
{
public:
	Customer() { arrive = processtime = 0; };
	void set(long when);
	int ptime() const { return processtime; };
	long when() const { return arrive; };

private:
	long arrive;
	int processtime;
};



