#pragma once
class Plorg
{
public:
	Plorg(const char* m_name = "Plorga", int m_CI = 50);
	int setCI(int m_CI);
	void showInfo() const;

private:
	char name[20];
	int CI; //degree of satisfication
};

