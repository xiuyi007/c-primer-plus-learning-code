#include "head.h"
#include <iostream>

int main() {
	using namespace std;

	chaff* array = new chaff[2];
	const char* s = "hello, world!";
	strcpy(array[0].dross, s);
	const char* s2 = "bye, world!";
	strcpy(array[1].dross, s2);

	for (int i = 0; i < 2; i++)
	{
		cout << array[i].dross << endl;
	}
	return 0;
}