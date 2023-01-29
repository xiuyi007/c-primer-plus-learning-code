#include "stonewt.h"

int main()
{
	Stonewt wt = 2.5;
	Stonewt wt2 = Stonewt(2, 3.6, Stonewt::PDS_LEFT);
	std::cout << wt << std::endl;
	std::cout << wt2 << std::endl;
	return 0;
}