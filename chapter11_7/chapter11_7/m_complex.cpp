#include "m_complex.h"

Complex::Complex()
{
    real = 0;
    vitual = 0;
}

Complex::Complex(double m_real, double m_vitual)
{
    real = m_real;
    vitual = m_vitual;
}

Complex Complex::operator+(const Complex& obj) const
{
     double t_real = this->real + obj.real;
     double t_vitual = this->vitual + obj.vitual;
    return Complex(t_real, t_vitual);
}

Complex Complex::operator-(const Complex& obj) const
{
    double t_real = this->real - obj.real;
    double t_vitual = this->vitual - obj.vitual;
    return Complex(t_real, t_vitual);
}

Complex Complex::operator*(const Complex& obj) const
{
    double t_real = this->real * obj.real - this->vitual * obj.vitual;
    double t_vitual = this->real * obj.real + this->vitual * obj.vitual;
    return Complex(t_real, t_vitual);
}

Complex Complex::operator*(double m) const
{
    return Complex(m * this->real, m * this->vitual);
}

Complex Complex::operator~() const
{
    return Complex(this->real, -this->vitual);
}

void Complex::reset(double lhd, double rhd)
{
    real = lhd;
    vitual = rhd;
}

Complex operator*(double lhd, Complex& rhd)
{
    return Complex(lhd * rhd.real, lhd * rhd.vitual);
}

std::ostream& operator<<(std::ostream& os, Complex& rhd)
{
    // TODO: 在此处插入 return 语句
    os << "(" << rhd.real << "," << rhd.vitual << ")" << std::endl;
    return os;
}

std::istream& operator>>(std::istream& is, Complex& rhd)
{
    // TODO: 在此处插入 return 语句
    double m_real = 0, m_vitual = 0;
    std::cout << "input real number: " << std::endl;
    is >> m_real;
    std::cout << "input vitual number: " << std::endl;
    is >> m_vitual;
    rhd.reset(m_real, m_vitual);
    return is;
}
