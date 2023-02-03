#include "String.h"
#include <cctype>
bool operator==(const String& st, const String& st2)
{
    return (std::strcmp(st.str, st2.str) == 0);
}
std::ostream& operator<<(std::ostream& os, String& s)
{
    os << s.str;
    return os;
}

std::istream& operator>>(std::istream& is, String& s)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
    {
        s = temp;
    }
    while (is && is.get() !='\n')
    {
        continue;
    }
    return is;
}

String operator+(const char* lhd, String& rhd)
{
    char* st = new char[strlen(lhd) + rhd.len + 1];
    strcpy(st, lhd);
    strcat(st, rhd.str);
    return String(st);
}

String::String()
{
    str = new char[1];
    str[0] = '\0';
    len = 0;
}

String::String(const char* s)
{
    str = new char[strlen(s) + 1];
    strcpy(str, s);
    len = strlen(s);

}

String::String(const String& s)
{
    len = s.length();
    str = new char[strlen(s.str) + 1];
    strcpy(str, s.str);
}

int String::length() const
{
    return len;
}

String& String::operator=(const String& s)
{
    if (&s == this)
    {
        return *this;
    }
    delete[] str;
    str = new char[strlen(s.str) + 1];
    strcpy(str, s.str);
    len = s.length();
    return *this;

}

String& String::operator=(const char* s)
{
    // TODO: 在此处插入 return 语句
    delete[] str;
    str = new char[strlen(s) + 1];
    strcpy(str, s);
    len = strlen(s);
    return *this;
}

char& String::operator[](int index)
{
    return str[index];
}

const char& String::operator[](int index) const
{
    // TODO: 在此处插入 return 语句
    return str[index];
}

String String::operator+(String& obj)
{
    char* st = new char[len + obj.len + 1];
    strcpy(st, str);
    strcat(st, obj.str);
    return String(st);
}

void String::stringlow()
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i++] = tolower(str[i]);
    }
}

void String::stringup()
{
    int i = 0;
    while (str[i] != '\0')
    {
        str[i++] = toupper(str[i]);
    }
}

int String::has(char letter)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == letter)
        {
            count++;
        }
        i++;
    }
    return count;
}


String::~String()
{
    delete[] str;
}
