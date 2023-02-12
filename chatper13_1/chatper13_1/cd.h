#pragma once
//base class
class Cd
{
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd(const Cd& d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& d);
private:
	char* performers;
	char* label;
	int selections; //number of selections;
	double playtime; //playing time in minutes;
};

//derived class
class Classic :public Cd
{
public:
	Classic(const char* s1, const char* s2, const char* s3, int n, double x);
	Classic();
	Classic& operator=(const Classic& obj);
	Classic(const Classic& obj);
	~Classic();
	void Report() const;
private:
	char* work;
};
