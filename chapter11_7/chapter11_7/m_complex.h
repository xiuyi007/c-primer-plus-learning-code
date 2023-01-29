#pragma once
#include <iostream>
class Complex
{
public:
	Complex();
	Complex(double m_real, double m_vitual);
	Complex operator+(const Complex& obj) const;
	Complex operator-(const Complex& obj) const;
	Complex operator*(const Complex& obj) const;
	Complex operator*(double m) const;
	Complex operator~() const;
	void reset(double lhd, double rhd);
	friend Complex operator*(double lhd, Complex& rhd);
	friend std::ostream& operator<<(std::ostream& os, Complex& rhd);
	friend std::istream& operator>>(std::istream& is, Complex& rhd);
private:
	double real; //实数部分
	double vitual; //虚数部分
};
