#include <iostream>
#include "stack.h"

using namespace std;
int main()
{
	Stack stack1;
	cout << "now build a stack without parameter" << endl;
	cout << "execute is empty---> " << stack1.isempty() << endl;
	stack1.show();
	Item tmp = 2;
	stack1.push(tmp);
	tmp = 3;
	stack1.push(tmp);
	cout << "push two elem, 2 and 3" << std::endl;
	stack1.show();
	cout << "pop a elem, it should be 3.4, now test it" << std::endl;
	stack1.pop(tmp);
	cout << tmp << endl;
	Stack stack2(2);
	cout << "create a stack, size = 2" << endl;
	stack2.show();
	stack2.push(tmp);
	stack2.push(tmp);
	stack2.show();
	cout << "test if full , it should 1" << endl;
	std::cout << stack2.isfull() << endl;
	cout << "show stack1's info to make a contrast" << endl;
	stack1.show();
	stack2 = stack1;
	cout << "stack2 = stack1 test, then show stack2" << endl;
	stack2.show();
	cout << "test isfull(), stack2, should be false: ";
	cout << stack2.isfull();
	return 0;
}