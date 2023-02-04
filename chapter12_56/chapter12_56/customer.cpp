#include "customer.h"
void Customer::set(long when)
{
	arrive = when;
	processtime = rand() % 3 + 1;
}