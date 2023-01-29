#pragma once
#include <iostream>
class Time
{
public:
	Time();
	Time(int h, int m = 0);
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	friend Time operator+(const Time& lhd, const Time& rhd);
	friend Time operator-(const Time& lhd, const Time& rhd);
	friend Time operator*(double m, const Time& t) { return t * m; }
	friend Time operator*(const Time& lhd, double n);
	friend std::ostream& operator<<(std::ostream& os, const Time& t);

private:
	int hours;
	int minutes;
};
