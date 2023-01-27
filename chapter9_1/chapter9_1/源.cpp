#include <iostream>
#include "golf.h"
extern const int Len;
int main()
{
	using namespace std;
	cout << "input your golf name: " << endl;
	golf g;
	char name[Len];
	int hc;
	cin >> name;
	cout << "input your handicap: " << endl;
	cin >> hc;
	setgolf(g, name, hc);
	cout << setgolf(g) << endl;
	showgolf(g);
	return 0;
}