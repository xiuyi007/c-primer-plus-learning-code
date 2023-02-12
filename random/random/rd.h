#pragma once
class baseT
{
public:
	baseT(int m_age = 0):age(m_age){};
	virtual ~baseT() { };
	void show() const { };
private:
	int age;
};

class newT:public baseT
{
public:
	newT(int m_age = 0, double m_time = 0):baseT(m_age), time(m_time){};
	~newT(){};

private:
	double time;
};
