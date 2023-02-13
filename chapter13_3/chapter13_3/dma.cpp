#include "dma.h"

dmaABC::dmaABC(const char* s, int r)
{
    label = new char[strlen(s) + 1];
    strcpy(label, s);
    rating = r;
}

dmaABC::dmaABC(const dmaABC& obj)
{
    label = new char[strlen(obj.label) + 1];
    strcpy(label, obj.label);
    rating = obj.rating;
}

dmaABC& dmaABC::operator=(const dmaABC& obj)
{
    if (this == &obj) return *this;
    delete[] label;
    label = new char[strlen(obj.label) + 1];
    strcpy(label, obj.label);
    rating = obj.rating;
    return *this;
}

dmaABC::~dmaABC()
{
    delete[] label;
}

void dmaABC::View() const
{
    std::cout << "label is: " << label << std::endl;
    std::cout << "rating is: " << rating << std::endl;
}

std::ostream& operator<<(std::ostream& os, const dmaABC& rhd)
{
    os << "dmaABC'info: \n";
    std::cout << "label is: " << rhd.label << std::endl;
    std::cout << "rating is: " << rhd.rating << std::endl;
    return os;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rhd)
{
    os << "baseDMA <<:\n";
    os << (const dmaABC&)rhd;
    return os;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& rhd)
{
    os << "lacksDMA <<:\n";
    os << "color: " << rhd.color << std::endl;
    os << (const dmaABC&)rhd;
    return os;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& rhd)
{
    os << "hasDMA <<:\n";
    os << "style: " << rhd.style << std::endl;
    os << (const dmaABC&)rhd;
    return os;
}

void baseDMA::View() const
{
    std::cout << "print baseDMA's info" << std::endl;
    dmaABC::View();
}

lacksDMA::lacksDMA(const char* s1, const char* s2, int r) :dmaABC(s2, r)
{
    strcpy(color, s1);
}

lacksDMA::lacksDMA(const lacksDMA& obj) :dmaABC(obj)
{
    strcpy(color, obj.color);
}

lacksDMA& lacksDMA::operator=(const lacksDMA& obj)
{
    strcpy(color, obj.color);
    dmaABC::operator=(obj);
    return *this;
}

void lacksDMA::View() const
{
    std::cout << "lacksDMA's info: '\n'";
    std::cout << "color: " << color << std::endl;
    dmaABC::View();
}

hasDMA::hasDMA(const char* s1, const char* s2, int r) : dmaABC(s2, r)
{
    style = new char[strlen(s1) + 1];
    strcpy(style, s1);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

hasDMA::hasDMA(const hasDMA& obj) :dmaABC(obj)
{
    style = new char[strlen(obj.style) + 1];
    strcpy(style, obj.style);
}

hasDMA& hasDMA::operator=(const hasDMA& rhd)
{
    if (this == &rhd)
    {
        return *this;
    }
    delete[] style;
    style = new char[strlen(rhd.style) + 1];
    strcpy(style, rhd.style);
    dmaABC::operator=(rhd);
    return *this;
}

void hasDMA::View() const
{
    std::cout << "hasDMA's info: '\n'";
    std::cout << "style: " << style << std::endl;
    dmaABC::View();
}
