#include <iostream>
#include "List.h"
void printValue(int& );
int main() {
	using namespace std;
	List my_list = List();
	cout << "test function is Empty with no elem in the lsit: " << endl;
	int i = 0;
	cout << "list adds a elem int 0" << endl;
	my_list.addItem(i);
	cout << "list adds a elem int 1" << endl;
	my_list.addItem(++i);
	cout << "test function isEmpty: " << endl;
	cout << my_list.isEmpty() << endl;
	cout << "test function isFull(): " << endl;
	for (int i = 2; i < 10; i++)
	{
		my_list.addItem(i);
	}
	cout << "test function isFull(), after insert 10 elem: " << endl;
	cout << my_list.isFull() << endl;
	cout << "then test function visit(), pass a function that print a value" << endl;
	void(*pf)(int&) = printValue;
	my_list.visit(pf);

	return 0;
}

void printValue(int& value)
{
	using namespace std;
	cout << value << "  ";
}