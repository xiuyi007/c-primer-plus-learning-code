#include "dma.h"
#include <iostream>
#include <string>
using namespace std;
const int OBLIMIT = 4;
int main()
{
	string style;
	string lb;
	string color;
	int rt, choice;
	dmaABC* p[OBLIMIT];
	for (int i = 0; i < OBLIMIT; i++)
	{
		cout << "Enter your lable: ";
		cin >> lb;
		cout << "\n Enter your rating: ";
		cin >> rt;
		cout << "Enter 1 for baseDMA, 2 for lacksDMA or 3 for hasDMA: ";
		cin >> choice;
		while (choice != 1 && choice != 2 && choice != 3)
		{
			cout << "please, enter 1 or 2 or 3" << endl;
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			p[i] = new baseDMA(lb.c_str(), rt);
			break;
		case 2:
			cout << "Enter color: ";
			cin >> color;
			cout << endl;
			p[i] = new lacksDMA(color.c_str(), lb.c_str(), rt);
			break;
		case 3:
			cout << "Enter style: ";
			cin >> style;
			cout << endl;
			p[i] = new hasDMA(style.c_str(), lb.c_str(), rt);
			break;
		}
	}
	for (int i = 0; i < OBLIMIT; i++)
	{
		p[i]->View();
	}
	for (int i = 0; i < OBLIMIT; i++)
	{
		delete p[i];
	}
	cout << "Done. \n";
	return 0;
}