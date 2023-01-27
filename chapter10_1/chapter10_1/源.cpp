#include "acount.h"
#include <iostream>
int main() {
	using namespace std;
	account customer("kaka", "togethf@qq.com", 0);
	cout << "print info below: ";
	customer.showInfo();
	cout << "print info after add money--test" << endl;
	customer.addMoney(10);
	cout << "then test getMoney" << endl;
	customer.getMoney();

	return 0;
}