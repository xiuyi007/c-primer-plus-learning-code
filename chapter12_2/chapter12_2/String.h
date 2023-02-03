#pragma once
#include <iostream>
class String
{
public:
	String();
	String(const char* s);
	String(const String& s); //copy constructor
	int length() const;
	String& operator=(const String& s);
	String& operator=(const char* s);
	char& operator[](int index); //注意这里返回值要加&，思考，a[i] = xxx;这里是要改变原来的内容的，所以要用&
	const char& operator[](int index) const;
	//overloaded operator < > 忽略不写了，对于题目本身不会使用
	friend bool operator==(const String& st, const String& st2);
	friend std::ostream& operator<<(std::ostream& os, String& s);
	friend std::istream& operator>>(std::istream& is, String& s);
	friend String operator+(const char* lhd, String& rhd);
	String operator+(String& obj);
	void stringlow();
	void stringup();
	int has(char letter);
	~String();
private:
	char* str;
	int len;
	static const int CINLIM = 80;
};

