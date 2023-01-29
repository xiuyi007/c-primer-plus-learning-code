#include <iostream>
#include "my_time.h"

int main()
{
	using std::cout;
	using std::endl;
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;
	cout << "Aida and Tosca:\n" << endl;
	cout << aida << "; " << tosca << endl;
	temp = aida + tosca;
	cout << "Aida + Tosca: " << temp << endl;
	return 0;
}