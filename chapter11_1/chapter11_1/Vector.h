#pragma once
#include <iostream>
#include <fstream>
class Vector
{
public:
	enum Mode
	{
		RECT,
		POLAR
	};
	Vector(double lhd, double rhd, Mode m_mode = RECT);
	Vector();
	void polar_mode();
	void rect_mode();
	double get_xval() const;
	double get_yval() const;
	double get_r() const;
	double get_theta() const;

	void reset(double lhd, double rhd, Mode m_mode = RECT);

	Vector operator+(const Vector& rhd) const;
	Vector operator-(const Vector& rhd) const;
	Vector operator-() const;
	Vector operator*(double rhd) const;
	friend Vector operator*(double lhd, const Vector& vct);
	friend std::ostream& operator<<(std::ostream& os, const Vector& vct);
	friend std::fstream& operator<<(std::fstream& fs, Vector vct);

private:
	double x;
	double y;
	double r;  //极坐标下的长度
	double theta; //极坐标下的角度;
	Mode mode;
	void set_polar();
	void set_rect();
};
