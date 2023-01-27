#include "Vector.h"
#include <cmath>
Vector::Vector(double lhd, double rhd, Mode m_mode)
{
    mode = m_mode;
    if (mode == RECT)
    {
        x = lhd;
        y = rhd;
        set_polar();
    }
    else if (mode == POLAR)
    {
        r = lhd;
        theta = rhd;
        set_rect();
    }
    else
    {
        std::cout << "please choose mode between RECT and POLAR, and now will set RECT mode for you" << std::endl;
        x = lhd;
        y = rhd;
        mode = RECT;
    }
}

Vector::Vector()
{
    x = y = theta = r = 0;
}

void Vector::polar_mode()
{
    mode = POLAR;
}

void Vector::rect_mode()
{
    mode = RECT;
}

double Vector::get_xval() const
{
    return x;
}

double Vector::get_yval() const
{
    return y;
}

double Vector::get_r() const
{
    return r;
}

double Vector::get_theta() const
{
    return theta;
}

void Vector::reset(double lhd, double rhd, Mode m_mode)
{
    mode = m_mode;
    if (mode == RECT)
    {
        x = lhd;
        y = rhd;
        set_polar();
    }
    else if (mode == POLAR)
    {
        r = lhd;
        theta = rhd;
        set_rect();
    }
    else
    {
        std::cout << "please choose mode between RECT and POLAR, and now will set RECT mode for you" << std::endl;
        x = lhd;
        y = rhd;
        mode = RECT;
    }
}

Vector Vector::operator+(const Vector& rhd) const
{
    return Vector(x + rhd.x, y + rhd.y);
}

Vector Vector::operator-(const Vector& rhd) const
{
    return Vector(x - rhd.x, y - rhd.y);
}

Vector Vector::operator-() const
{
    return Vector(-x, -y);
}

Vector Vector::operator*(double rhd) const
{
    return Vector(x * rhd, y * rhd);
}

void Vector::set_polar()
{
    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
}

void Vector::set_rect()
{
    x = r * cos(theta);
    y = r * sin(theta);
}

Vector operator*(double lhd, const Vector& vct)
{
    return Vector(lhd * vct.x, lhd * vct.y);
}

std::ostream& operator<<(std::ostream& os, const Vector& vct)
{
    // TODO: 在此处插入 return 语句
    if (vct.mode == Vector::RECT)
    {
        std::cout << "vector x: " << vct.x << std::endl;
        std::cout << "vector y: " << vct.y << std::endl;
    }
    else
    {
        std::cout << "vecotr r: " << vct.r << std::endl;
        std::cout << "vector theta: " << vct.theta << std::endl;
    }
    return os;
}

std::fstream& operator<<(std::fstream& fs, Vector vct)
{
    // TODO: 在此处插入 return 语句
    if (vct.mode == Vector::RECT)
    {
        fs << "vector x: " << vct.x << std::endl;
        fs << "vector y: " << vct.y << std::endl;
    }
    else
    {
        fs << "vecotr r: " << vct.r << std::endl;
        fs << "vector theta: " << vct.theta << std::endl;
    }
    return fs;
}
