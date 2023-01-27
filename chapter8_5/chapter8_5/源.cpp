#include <iostream>
#include "max_list.h"
int main() {
	using namespace std;
	cout << "input 6 int, split it with space" << endl;
	int a1[6];
	InputData(a1, 6);
	cout << "the max element in this int array is : " << maximum(a1, 6) << endl;
	cout << "input 4 double, split with space" << endl;
	double a2[4];
	InputData(a2, 4);
	cout << "the max element in this int array is : " << maximum(a2, 4) << endl;
}