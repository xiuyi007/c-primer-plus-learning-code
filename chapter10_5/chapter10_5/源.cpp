#include "stack.h"
int main() {
	Stack myStack;
	customer cus1 = {"asdf", 1};
	customer cus2 = {"qwer", 2};
	myStack.push(cus1);
	myStack.push(cus2);
	myStack.pop();
	myStack.pop();

	return 0;
}