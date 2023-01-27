#include "plorg.h"
#include <iostream>

Plorg::Plorg(const char* m_name, int m_CI)
{
	int i = 0;
	do
	{
		name[i] = m_name[i];
	} while (m_name[i++] != '\0');
	
	CI = m_CI;
}

int Plorg::setCI(int m_CI)
{
	CI = m_CI;
	return 1;
}

void Plorg::showInfo() const
{
	using namespace std;
	cout << "name: " << name << endl;
	cout << "CI: " << CI << endl;
}
