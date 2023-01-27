#include <iostream>
#include "plorg.h"

int main() {
	Plorg p = Plorg("togethf", 10);
	std::cout << "now, show info: " << std::endl;
	p.showInfo();
	std::cout << "now, test function set: " << std::endl;
	p.setCI(20);
	p.showInfo();
	return 0;
}