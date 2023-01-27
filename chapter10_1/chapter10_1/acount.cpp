#include "acount.h"
#include <iostream>

account::account(const char* m_name, const char* m_acc, float m_money)
{
	int i = 0;
	while (m_name[i] != '\0')
	{
		name[i] = m_name[i];
		++i;
	}
	name[i] = m_name[i];
	i = 0;
	while (m_acc[i] != '\0')
	{
		acc[i] = m_acc[i];
		++i;
	}
	acc[i] = m_acc[i];
	money = m_money;

}

account::~account()
{

}

void account::showInfo() const
{
	using namespace std;
	cout << "name: " << name << endl;
	cout << "account: " << acc << endl;
	cout << "money" << money << endl;
}

void account::addMoney(int m_money)
{
	money = m_money;
}

void account::getMoney()
{
	std::cout << "you have money: " << money << std::endl;
}
