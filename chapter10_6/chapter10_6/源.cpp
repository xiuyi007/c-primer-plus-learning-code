#include "Move.h"
#include <iostream>
int main() {
	Move m1(1, 2);
	Move m2(1, 1);
	std::cout << "test funciton add: 1,2/1,1----" << std::endl;
	Move m3 = m1.add(m2);
	m3.showmove();
	std::cout << "test function reset---" << std::endl;
	m3.reset();
	m3.showmove();
	return 0;
}