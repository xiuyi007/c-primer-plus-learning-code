#include "head.h"

int main() {
	using namespace SALES;
	Sales s1, s2;
	const double ar[3] = { 1.1 ,2.2, 3.3 };
	setSales(s1, ar, 3);
	setSales(s2);
	showSales(s1);
	showSales(s2);
	return 0;
}