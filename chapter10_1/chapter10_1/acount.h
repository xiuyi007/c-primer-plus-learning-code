#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
class account
{
public:
	account(const char* m_name, const char* m_acc, float m_money = 0);
	~account();
	void showInfo() const;
	void addMoney(int m_money);
	void getMoney();
private:
	char name[40];
	char acc[40];
	float money;
};
#endif // !ACCOUNT_H
