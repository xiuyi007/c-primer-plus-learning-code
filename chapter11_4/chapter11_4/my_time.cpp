#include "my_time.h"
Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes = minutes % 60;
}

void Time::AddHr(int h)
{
    hours += h;
}

void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator+(const Time& lhd, const Time& rhd)
{
    int m = lhd.minutes + rhd.minutes;
    int h = lhd.hours + rhd.hours;
    int minutes = m % 60;
    int hours = h + (m / 60);
    return Time(hours, minutes);
}

Time operator-(const Time& lhd, const Time& rhd)
{
    int l = lhd.hours * 60 + lhd.minutes;
    int r = rhd.hours * 60 + rhd.minutes;
    int minutes = l - r;
    if (minutes < 0)
    {
        std::cout << "������Ϊ����, ����һ��0h,0m��time����" << std::endl;
        return Time();
    }
    int hours = minutes / 60;
    int minute = minutes % 60;
    return Time(hours, minute);
}

Time operator*(const Time& lhd, double n)
{
    //ĳ��ʵ��
    return Time();
}

std::ostream& operator<<(std::ostream& os, const Time& t)
{
    // TODO: �ڴ˴����� return ���
    os << t.hours << "hours, " << t.minutes << " minutes";
    return os;
}
