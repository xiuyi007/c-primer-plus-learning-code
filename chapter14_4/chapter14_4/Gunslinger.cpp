#include "Gunslinger.h"
#include <iostream>
double Gunslinger::Draw()
{
	return 0.0;
}
void Gunslinger::show() const
{
	Person::show();
	std::cout << "sign_num: " << sign_num << std::endl;
}
